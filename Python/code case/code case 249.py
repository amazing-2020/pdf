def matrix():
    X = [[12, 7, 3],
         [4, 5, 6],
         [7, 8, 9]]

    Y = [[5, 8, 1],
         [6, 7, 3],
         [4, 5, 9]]
    a_list = []
    a_list_1 = []
    a_list_2 = []
    a_list_3 = []
    for i in range(3):
        for j in range(3):
            if i == 0:
                temp = a_list_1
            elif i == 1:
                temp = a_list_2
            else:
                temp = a_list_3
            temp.append(X[i][j]+Y[i][j])
    a_list.insert(0, a_list_1)
    a_list.insert(1, a_list_2)
    a_list.insert(1, a_list_3)
    print(a_list)


matrix()
