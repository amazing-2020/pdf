def reverse(list, n):
    for x in range(n):
        list.append(arr.pop(0))
    return list


arr = [1, 2, 3, 4, 5, 6, 7]
print(reverse(arr, 3))
