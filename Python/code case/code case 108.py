def lcm(a, b):
    if b > a:
        a, b = b, a
    if a % b == 0:
        return a
    mul = 2
    while a * mul % b != 0:
        mul += 1
    return a * mul


while True:
    c = int(input('Enter the first number(0 to exit): '))
    d = int(input("Enter the second number(0 to exit): "))
    if c == 0 or d == 0:
        print('bye')
        break
    print(lcm(c, d))
