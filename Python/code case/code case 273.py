from collections import deque

m = 3
a = [1, 2, 3, 4, 5, 6, 7]
f = deque(a)
f.rotate(m)
print(list(f))
# next solution
a = [1, 2, 3, 4, 5, 6, 7]


def rot(a, n):
    l = len(a)
    n = l-n
    return a[n:l]+a[0:n]


b = rot(a, m)
print(a, '\n', b)
