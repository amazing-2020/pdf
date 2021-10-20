num = int(input('Enter a integer: '))
if num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            print(num, 'is not prime number')
            print(i, ' multiply ', num/i, ' = ', num)
            break
        else:
            print(num, 'is prime number')
            break
else:
    print(num, 'is not prime number')
