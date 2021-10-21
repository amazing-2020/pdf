import math

num = int(input('Enter a integer: '))
if num > 1:
    squarenum = math.floor(num ** 0.5)
    for i in range(2, (squarenum + 1)):
        if num % i == 0:
            print(num, 'is composite number.')
            print(i, 'multiply', num // i, '=', num)
            break
    else:
        print(num, 'is prime number')
else:
    print(num, 'is neither a prime, nor a composite number')
