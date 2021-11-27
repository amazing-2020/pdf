a = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29]
b = 18
a.append(b)  # c[i-1] = b
c = a[:]
l = len(c)
for i in range(l, 0, -1):
    if b > c[i - 2]:
        c[i - 1] = b
        break
    else:
        c[i - 1] = c[i - 2]
print(c)
