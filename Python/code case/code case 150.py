def search(arr, n, x):
    for i in range(0, n):
        if arr[i] == x:
            return i
    return -1


arr = ['A', 'B', 'C', 'D', 'E']
x = 'D'
n = len(arr)
result = search(arr, n, x)
if result == -1:
    print('Element not exist')
else:
    print('The index of the element in the array is ', result)
