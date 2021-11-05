def AppendNumbers(array):
    num = input('Numbers:(spilt by spaces)\t').split()
    for i in num:
        array.append(int(i))
    print('Before sort: {}'.format(array))
# this function allow users add element to the array


def InsertionSort(array):
    AppendNumbers(array)

    lis = []
    while True:
        for i in array:
            minimum = min(array)  # find the minimum value of an unsorted array
            if i == minimum:
                lis.append(i)
                array.remove(i)
        if array == []:  # all the element was add to the lis and were sorted
            break
    print("After sorted: {}".format(lis))


array = [6, 4, 45, -2, -1, 2, 4, 0, 1, 2, 3, 4, 5, 6, -4, -6,  7, 8, 8, 34, 0]
InsertionSort(array)
