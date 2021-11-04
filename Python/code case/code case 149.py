def binary_search(a, x):
    mid = tempmid = len(a)//2
    while len(a) > 1:
        if a[mid] > x:
            a = a[:mid]
            mid = len(a)//2
            tempmid -= (len(a) - mid)
        elif a[mid] < x:
            a = a[mid + 1:]
            mid = len(a)//2
            tempmid += (mid + 1)
        else:
            break
    if len(a) == 1:
        tempmid = tempmid if a[mid] == x else -1
    if len(a) < 1:
        tempmid = -1

    return tempmid


arr = [2, 3, 4, 5, 6, 7, 8, 9, 10, 20]
print(arr[5:])
num = binary_search(arr, 10)
print(num)
