def fanzhuan(arr, d):
    n = len(arr)
    arr = arr[d:] + arr[:d]
    return arr


array = [1, 2, 3, 4, 5, 6, 7]
print("Before reverse: ", array)
print('After reverse: ', fanzhuan(array, 2))
