def insertionSort(arr):
    for i in range(1, len(arr)):  # start at the second element
        key = arr[i]  # to be sorted element

        j = i - 1
        while j >= 0 and key < arr[j]:  # if the key smaller than this element
            arr[j + 1] = arr[j]
            j -= 1  # compare all the element smaller than the index i-1(include i-1)
        # as a result, just one element's value will be changed
        arr[j + 1] = key


arr = [1, 45, 45, 5, 23, 23, 4, 23, 4, 32, 432, 4, 23, 23]
insertionSort(arr)
print('Array after sort: ')
print(arr)
