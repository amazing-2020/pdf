# Binary Search
# r: The search part of the list
# l: The search scope
def binarysearch(arr, l, r, x):
    if r >= l:
        mid = int(l + (r - 1)/2)
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binarysearch(arr, l, mid - 1, x)
        else:
            return binarysearch(arr, mid + 1, r, x)
    else:
        return -1


arr = [2, 3, 4, 5, 6, 7, 8, 9, 10, 20]
x = 10

result = binarysearch(arr, 0, len(arr) - 1, x)
if result != -1:
    print('The index of the element in the array is %d' % result)
else:
    print('Element is not in the array')
