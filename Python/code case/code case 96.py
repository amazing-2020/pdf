num = int(input('Enter a number: '))
factorial = 1

if num < 0:
    print("Errors!")
elif num == 0:
    print("0! = 1")
else:
    for i in range(1, num + 1):
        factorial = factorial * i
    print("{}! = {}".format(num, factorial))
