def gcd(a, b):
    if b > a:
        a, b = b, a
    if a % b == 0:
        return b
    for i in range(b//2, 1, -1):
        if b % i == 0 and a % i == 0:
            return i
    return 1


def gcd2(a, b):
    return a if b == 0 else gcd2(b, a % b)


while True:
    c = int(input('Enter the first number: '))
    d = int(input("Enter the second number: "))
    print(gcd(c, d))
    print(gcd2(c, d))
