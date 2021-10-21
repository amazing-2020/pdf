import math

lower = int(input('Enter the lower value: '))
upper = int(input('Enter the upper value: '))
print('The prime result is: ')
print("="*10)
pri_num = 0
com_num = 0
for num in range(lower, upper+1):
    square_num = math.floor(num ** 0.5)
    if num > 1:
        for i in range(2, (square_num + 1)):
            if (num % i) == 0:
                com_num += 1
                break
        else:
            pri_num += 1
            print(num)
print("="*10)
print(com_num, "not prime numbers")
print(pri_num, "prime numbers")
