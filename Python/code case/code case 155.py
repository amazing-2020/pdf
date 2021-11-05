def insertionSort(arr):
    for i in range(1, len(arr)):
        j = i
        while j > 0:
            if arr[j] < arr[j - 1]:
                arr[j - 1], arr[j] = arr[j], arr[j - 1]
            j -= 1
    return arr


arr = [1, 12, 2, 11, 13, 5, 6, 18, 4, 9, -5, 3, 11]
print(insertionSort(arr))
