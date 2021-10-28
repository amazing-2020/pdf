def reverseArray(arr, d, n):
    if (d >= n):
        print('Invalid number')
        return
    for i in range(0, d):
        temp = arr[0]
        arr.pop(0)
        arr.append(temp)


arr = [1, 2, 3, 4, 5, 6, 7]
print('old: ', arr)
reverseArray(arr, 2, len(arr))
print('new: ', arr)
