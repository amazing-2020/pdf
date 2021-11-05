def insertSort():
    import random
    random.seed(888)
    data = []
    for i in range(15):
        data.append(random.randint(1, 100))
    print(data)
    for i in range(1, len(data)):
        temp = data[i]
        for j in reversed(range(i)):
            if temp < data[j]:
                data[j+1], data[j] = data[j], temp
    print(data)


insertSort()
