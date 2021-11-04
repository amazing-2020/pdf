def linesearch(num=50):
    import random
    random.seed(888)
    data = []
    for i in range(15):
        data.append(random.randint(1, 100))
    data.sort()
    print(data)
    for i in range(0, len(data)):
        if data[i] == num:
            print(i)
            break
        else:
            print('Not exist')


linesearch()
