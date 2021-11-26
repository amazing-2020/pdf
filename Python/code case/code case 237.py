import numpy as np

a = np.random.randint(1, 100, 10)
print("Random data")
print(a)


def sortq(left, right, a):
    if left > right:
        return
    i = left
    j = right
    key = a[left]
    while i < j:
        while i < j and key <= a[j]:
            j -= 1
        a[i] = a[j]
        while i < j and key >= a[i]:
            i += 1
        a[j] = a[i]
    a[j] = key
    sortq(left, i-1, a)
    sortq(i+1, right, a)
    return a


b = sortq(0, len(a)-1, a)
print("After sort: ", b)

