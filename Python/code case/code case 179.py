for i in range(1, 5):
    for j in range(1, 5):
        for k in range(1, 5):
            if i != k and i != j and j != k:
                print(i, j, k)

input("Enter")
list_num = [1, 2, 3, 4]
list2 = [i*100 + j*10 + k for i in list_num for j in list_num for k in list_num if (j != i and k != j and k != i)]
print(list2)
