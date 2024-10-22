from datetime import datetime, timedelta
from random import randrange

def q1(startdate: str, enddate: str) -> int:
    '''
    编写一个函数，输入两个日期，返回这两个日期之间的工作日天数（即排除掉周末：星期六和星期日）。
    例如，如果输入的两个日期是2022年1月3日和2022年1月10日（这两天都是星期一），那么返回的工作日天数应该是6。在实现这个函数时，你可能需要用到Python的datetime模块。
    :param startdate: 开始日期
    :param enddate:  结束日期
    :return: 两个日期之间的工作日天数
    '''
    sdate = datetime.strptime(startdate, '%Y-%m-%d')
    edate = datetime.strptime(enddate, '%Y-%m-%d')
    delta = edate - sdate
    workdays = 0

    for i in range(delta.days + 1):
        cdate = sdate + timedelta(days=i)
        if cdate.weekday() < 5:
            workdays += 1

    return workdays


def q2(list_d: list) -> list:
    '''
    列表中包含字典，如[{'name':'Dong', 'age':37}, {'name':'Zhang', 'age':40}, {'name':'Li', 'age':50}, {'name':'Dong', 'age':43}]
    对这个列表进行排序
    规则：按照name的字母个数进行逆序排列，如果name相同，则按照age的每位数字之和的大小升序排
    note：每位数字之和，例如37，就是3+7=10,  43就是4+3=7
    :return: 排序后的列表
    '''
    def digits(num):
        return sum(int(digit) for digit in str(num))

    slist = sorted(list_d, key=lambda x: (-len(x['name']), digits(x['age'])))
    return slist


def q3(iterable, chunk_size):
    '''
    编写一个生成器 chunked(iterable, chunk_size)，
    它可以将一个可迭代对象分割成固定大小的块。每次迭代应返回一个列表，包含下一组 chunk_size 个元素。
    :param iterable: 任何可迭代对象
    :param chunk_size: 块大小
    :yields: 数据的一块
    '''
    for i in range(0, len(iterable), chunk_size):
        yield iterable[i:i + chunk_size]


def memto(func):
    '''
    缓存装饰器
    实现一个装饰器 memoize, 它可以缓存传给装饰函数的结果，并在相同的输入再次调用时返回缓存的结果，从而优化性能。
    '''
    cache = {}

    def wrapper(*args, **kwargs):
        key = (args, tuple(kwargs.items()))
        if key not in cache:
            cache[key] = func(*args, **kwargs)
        return cache[key]

    return wrapper


@memto
def fib(n):
    if n <= 1:
        return n
    else:
        return fib(n - 1) + fib(n - 2)


if __name__ == '__main__':
    # 测试 q1 函数
    print(f"q1的结果为：{q1('2023-11-06', '2023-11-11')}") # 应该输出 5

    # 测试 q2 函数
    lst = [{'name':'Dong', 'age':37}, {'name':'Zhang', 'age':40}, {'name':'Li', 'age':50}, {'name':'Dong', 'age':43}]
    print(f"q2的结果为：{q2(lst)}")

    # 测试 q3 函数
    print("q3的结果为：")
    for chunk in q3(range(10), 3):
        print(chunk)

    # 测试 fib 函数
    print(f"fib的结果为：{fib(10)}") # 输出 Fibonacci 数列的第10个数字
