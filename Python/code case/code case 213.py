from functools import reduce

Tn = 0
Sn = []
n = int(input('n = '))
a = int(input('a = '))
for count in range(n):
    Tn = Tn + a
    a *= 10
    Sn.append(Tn)
    print(Tn)
Sn = reduce(lambda x, y: x + y, Sn)
print("Sum = ", Sn)
