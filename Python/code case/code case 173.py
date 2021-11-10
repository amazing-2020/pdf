def one_heap_sort(arr, l, r):
    if r-l <= 0:
        return
    if r-l == 1 and arr[l] > arr[r]:
        arr[l], arr[r] = arr[r], arr[l]
    else:
        middle = l + (r-l-1)//2
        one_heap_sort(arr, l, middle)
        one_heap_sort(arr, middle+1, r-1)
        if arr[middle] > arr[r]:
            arr[middle], arr[r] = arr[r], arr[middle]
        if arr[r-1] > arr[r]:
            arr[r-1], arr[r] = arr[r], arr[r-1]


def heap_sort(arr):
    for i in range(len(arr)-1, 0, -1):
        one_heap_sort(arr, 0, i)


arr = [1, 10, 8, 200, 50, 4]
heap_sort(arr)
print(arr)
