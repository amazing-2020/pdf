print("Enter a num bigger than 10:")
n = int(input())
x = []
i = 0
while int(n) != 0:
    x.append(int(n % 10))
    i += 1
    n /= 10
print("%d bits" % i)
print("The reversed {0}".format(x[::]))
