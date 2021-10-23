num = int(input('Enter a number: '))
sum = 0
n = len(str(num))

temp = num
while temp > 0:
    digit = temp % 10
    sum += digit ** n
    temp //= 10

if num == sum:
    print(num, 'is 阿姆斯特朗数')
else:
    print(num, 'is not 阿姆斯特朗数')
