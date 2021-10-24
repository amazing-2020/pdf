list1 = []


def hcf(x, y):
    value = max(x, y)
    for i in range(1, min(x, y)+1):
        if (x % i == 0) and (y % i == 0):
            list1.append(i)


c = int(input('Enter the first number: '))
d = int(input("Enter the second number: "))
hcf(c, d)
print(c, " and ", d, " has a greatest common divisor: ", list1)

