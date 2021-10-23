def hcf(x, y):
    divisor = 1
    if x > y:
        smaller = y
    else:
        smaller = x

    for i in range(1, smaller + 1):
        if (x % i == 0) and (y % i == 0):
            divisor = i
    return divisor


num1 = int(input('Enter the first number: '))
num2 = int(input("Enter the second number: "))
print(num1, " and ", num2, " has a greatest common divisor: ", hcf(num1, num2))
