import psycopg2
from psycopg2.extras import RealDictCursor
from flask import Flask, render_template

# 连接到shumeipai数据库
conn = psycopg2.connect(
    host="localhost",  # 如果数据库在本地，保持localhost
    database="shumeipai",  # 数据库名
    user="postgres",  
    password="123456"  # 替换为你的密码
)

# 创建Flask应用
app = Flask(__name__)

@app.route('/')
def index():
    # 查询distance表中的数据
    with conn.cursor(cursor_factory=RealDictCursor) as cursor:
        cursor.execute("SELECT id, distance FROM distance;")
        results = cursor.fetchall()  # 获取查询结果
    
    # 将数据传递到模板中进行渲染
    return render_template('index.html', results=results)

if __name__ == '__main__':
    app.run(debug=True)
