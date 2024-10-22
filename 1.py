# -*- coding: utf-8 -*-
import os
import numpy as np
import librosa
from sklearn.model_selection import train_test_split
from sklearn.ensemble import RandomForestClassifier
from sklearn.metrics import accuracy_score
import requests
import json

# 提取音频特征
def extract_features(file_path):
    try:
        audio, sample_rate = librosa.load(file_path)
        mfccs = librosa.feature.mfcc(y=audio, sr=sample_rate, n_mfcc=40)
        mfccs_processed = np.mean(mfccs.T, axis=0)
        return mfccs_processed
    except Exception as e:
        print(f"Error encountered while parsing file: {file_path}. Error: {e}")
        return None

# 加载数据集
def load_data(data_path):
    features = []
    labels = []
    for emotion_folder in os.listdir(data_path):
        emotion_path = os.path.join(data_path, emotion_folder)
        if os.path.isdir(emotion_path):
            for file_name in os.listdir(emotion_path):
                file_path = os.path.join(emotion_path, file_name)
                if file_name.endswith(".wav"):
                    print(f"Loading file: {file_path}")
                    label = "happy" if emotion_folder == "happy" else "sad"
                    feature = extract_features(file_path)
                    if feature is not None:
                        features.append(feature)
                        labels.append(label)
                    else:
                        print(f"No feature extracted from {file_name}, skipped.")
    
    if not features:
        raise ValueError("No supported audio files found or all files are empty.")

    return np.array(features), np.array(labels).ravel()

# 数据路径
data_path = os.path.join(os.path.expanduser("~"), "Desktop", "pig_sounds")

# 加载数据
X, y = load_data(data_path)

# 数据分割
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)

# 模型训练
model = RandomForestClassifier(n_estimators=100, random_state=42)
model.fit(X_train, y_train)

# 预测和评估
y_pred = model.predict(X_test)
accuracy = accuracy_score(y_test, y_pred)
print(f"Model accuracy: {accuracy}")

# 情绪预测函数
def predict_emotion(file_path, model):
    feature = extract_features(file_path)
    if feature is not None:
        feature = feature.reshape(1, -1)
        prediction = model.predict(feature)
        return prediction[0]
    else:
        return None

# 上传数据到ThingsBoard
def upload_to_thingsboard(emotion):
    THINGSBOARD_SERVER = 'http://localhost:8080'
    ACCESS_TOKEN = 'a902Nx9PmdWFOELryJW5'
    url = f"{THINGSBOARD_SERVER}/api/v1/{ACCESS_TOKEN}/telemetry"
    headers = {'Content-Type': 'application/json'}
    payload = {"情绪": emotion}  # 确保键名为“情绪”
    
    response = requests.post(url, headers=headers, data=json.dumps(payload))
    if response.status_code == 200:
        print("Data uploaded successfully to ThingsBoard.")
    else:
        print(f"Failed to upload data to ThingsBoard. Status code: {response.status_code}, Response: {response.text}")

# 示例使用
file_path = "C:/Users/12189/Desktop/pig_sounds/test1.wav"  # 替换为您要预测的具体文件路径
emotion = predict_emotion(file_path, model)
if emotion:
    print(f"Predicted emotion: {emotion}")
    upload_to_thingsboard(emotion)
else:
    print("Failed to predict emotion.")
