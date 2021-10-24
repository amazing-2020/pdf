def lcm(x, y):
    # greater = 0
    if x > y:
        greater = x
    else:
        greater = y
    while True:
        if ((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1

    return lcm


c = int(input('Enter the first number: '))
d = int(input("Enter the second number: "))
print(c, " and ", d, " has a greatest common divisor: ", lcm(c, d))
