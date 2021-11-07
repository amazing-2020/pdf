def selection_sort(arr):
    for i in range(len(arr)):
        index = i + arr[i:].index(min(arr[i:]))
        arr[i], arr[index] = arr[index], arr[i]
    return arr


A = [64, 25, 12, 22, 11]
print(selection_sort(A))
