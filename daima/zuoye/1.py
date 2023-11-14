from random import randrange

def recommendFilms(historydata, userdata):
    '''
    电影推荐函数
    原则：两个用户共同打分的电影最多，并且所有电影打分差值的平方和最小
    :param historydata: 历史打分记录
    :param userdata: 当前用户打分记录
    :return: 与当前用户最相似的用户，及其对电影打分情况
    '''

    # 初始化最相似用户和电影评分字典
    similarUser = None
    films = {}

    # 遍历历史数据中的每个用户及其打分记录
    for user, ratings in historydata.items():
        # 查找当前用户和历史用户的共同评分电影
        common_movies = set(ratings.keys()) & set(userdata.keys())

        # 计算共同电影的打分差值的平方和
        similarity = sum((ratings[movie] - userdata[movie]) ** 2 for movie in common_movies)

        # 如果当前用户更相似，更新最相似用户和电影评分字典
        if similarUser is None or similarity < films['similarity']:
            similarUser = user
            films = {
                'similarity': similarity,
                'ratings': ratings
            }

    return similarUser, films

if __name__ == '__main__':
    # 对recommendFilms函数进行测试
    # 模拟历史电影打分数据
    data = {'user'+str(i):{'film'+str(randrange(1, 15)):randrange(1, 6)
                           for j in range(randrange(3, 10))}
            for i in range(10)}

    # 模拟当前用户打分数据
    user = {'film'+str(randrange(1, 15)):randrange(1,6) for i in range(5)}
    print('known data'.center(50, '='))
    for item in data.items():
        print(len(item[1].keys()&user.keys()),
              sum(((item[1].get(film)-user.get(film))**2
                   for film in user.keys()&item[1].keys())),
              item,
              sep=':')
    print('current user'.center(50, '='))
    print(user)
    print('most similar user and his films'.center(50, '='))

    similarUser, films = recommendFilms(data, user)

    print(similarUser, films, sep=':')
    print('recommended film'.center(50, '='))
    # 在当前用户没看过的电影中选择打分最高的进行推荐
    print(max(films.keys()-user.keys(), key=lambda film: films[film]))
