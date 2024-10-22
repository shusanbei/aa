def caesar_encrypt(text, key):  
    result = ""  
  
    for i in range(len(text)):  
        char = text[i]  
  
        if char.isupper():  
            result += chr((ord(char) + key - 65) % 26 + 65) 
        else:  
            result += chr((ord(char) + key - 97) % 26 + 97) 
  
    return result  
  
  
def caesar_decrypt(text, key):  
    return caesar_encrypt(text, -key)  
  
if __name__ == "__main__":  
    while True:  
        print("请选择操作：")  
        print("1. 加密")  
        print("2. 解密")  
        print("3. 退出")  
  
        choice = input("请输入您的选择（1/2/3）：")  
  
        if choice == "1":  
            plain_text = input("请输入明文：")  
            key = int(input("请输入密钥（偏移量）："))  
            cipher_text = caesar_encrypt(plain_text, key)  
            print("加密后的密文为：", cipher_text)

        elif choice == "2":  
            cipher_text = input("请输入密文：")  
            key = int(input("请输入密钥（偏移量）："))  
            plain_text = caesar_decrypt(cipher_text, key)  
            print("解密后的明文为：", plain_text)

        elif choice == "3": 
            print("已退出...")
            break  

        else:  
            print("无效的输入，请重新输入。")  