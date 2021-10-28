def rotateList(arr, d, n):
    temp = []
    for i in range(0, d):
        temp.append(arr[i])
    for i in range(0, n - d):
        arr[i] = arr[i + d]
    arr = arr[0:n - d]
    arr.extend(temp)
    return arr


arr = [x for x in range(1, 8)]
print(arr)
print(rotateList(arr, 2, len(arr)))
