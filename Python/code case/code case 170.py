def merge_sort(left, right):
    i, j = 0, 0
    reslut = []
    while i < len(left) and j < len(right):
        if left[i] <= right[j]:
            reslut.append(left[i])
            i += 1
        else:
            reslut.append(right[j])
            j += 1
    reslut += left[i:]
    reslut += right[j:]

    print(reslut)
    return reslut


def sort_by_merge(arr, size):
    if size <= 1:
        return arr
    i = size//2
    left = sort_by_merge(arr[:i], i)
    right = sort_by_merge(arr[i:], size - i)
    return merge_sort(left, right)


arr = [12, 11, 13, 5, 7, 6]
print(sort_by_merge(arr, len(arr)))
