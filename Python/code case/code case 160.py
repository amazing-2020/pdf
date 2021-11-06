def Select_sort1():
    A = [-9, -8, 640, 25, 12, 22, 33, 23, 45, 11, -2, -5, 99, 0]
    for i in range(len(A)):
        minimum = i
        for j in range(i+1, len(A)):
            if A[minimum] > A[j]:
                minimum = j
        A[i], A[minimum] = A[minimum], A[i]
    print("After sort:")
    print(A)


def Select_sort2():
    A = [-9, -8, 640, 25, 12, 22, 33, 23, 45, 11, -2, -5, 99, 0]
    counter = 0
    array = []
    for i in A:
        counter += 1
        for j in A[counter:]:
            if i > j:
                i = j
            A.remove(i)
            A.insert(counter-1, i)
        array.append(i)
    print("After sort:")
    print(A)


Select_sort1()
Select_sort2()
