def heapify(arr):
    n = len(arr)
    for i in reversed(range(n//2)):
        shift_down(arr, n, i)


def shift_down(arr, n, k):
    while 2 * k + 1 < n:
        j = 2 * k + 1
        if j + 1 < n and arr[j + 1] < arr[j]:
            j += 1
        if arr[k] <= arr[j]:
            break
        arr[k], arr[j] = arr[j], arr[k]
        k = j


def shift_down2(arr, n, k):
    smallest, l, r = k, 2*k+1, 2*k+2
    while l < n:
        if arr[l] < arr[smallest]:
            smallest = l
        if r < n and arr[r] < arr[smallest]:
            smallest = r
        if smallest == k:
            break
        else:
            arr[k], arr[smallest] = arr[smallest], arr[k]
            k = smallest
            l, r = 2*k+1, 2*k+2


def heap_sort(arr):
    n = len(arr)
    heapify(arr)
    print("Plie up:", arr)
    for i in range(n-1):
        arr[n-i-1], arr[0] = arr[0], arr[n-i-1]
        shift_down(arr, n-i-1, 0)


arr = [3, 2, 1, 9, 7, 8]
heap_sort(arr)
print(arr)
