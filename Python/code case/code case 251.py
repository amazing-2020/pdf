a = [x for x in range(1, 101)]
b = (a[0] + a[-1]) * (len(a)//2)
if len(a) % 2 != 0:
    b += a[(len(a)-1)//2]
print(b)

print(sum(range(0, 101)))

