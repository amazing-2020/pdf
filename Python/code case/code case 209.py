import math


def is_prime(num):
    flag = 1
    for i in range(2, int(math.sqrt(num)+1)):
        if num % i == 0:
            flag = 0
            break
    if flag:
        return True
    else:
        return False


num = int(input("Enter a number: "))
print(num, '=', end='')
while not is_prime(num):
    for i in range(2, int(num)):
        if num%i == 0:
            print(i, '*', end='')
            num //= i
            break
print(num)
