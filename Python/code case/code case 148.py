def binary_search(sorted_list, key, isAsc=True):
    left = 0
    right = len(sorted_list) - 1
    while left <= right:
        mid = left + right>>1
        if isAsc and sorted_list[mid] < key \
            or not isAsc and sorted_list[mid] > key:
            left = mid + 1
        elif isAsc and sorted_list[mid] > key \
            or not isAsc and sorted_list[mid] < key:
            right = mid - 1
        else:
            return mid
    return -1


arr = [2, 3, 4, 5, 6, 7, 8, 9, 10, 20]
ret = binary_search(arr, 10, True)
print(ret)
