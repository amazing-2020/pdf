lower = int(input('Min: '))
upper = int(input('Max: '))

for num in range(lower, upper + 1):
    sum = 0
    n = len(str(num))

    temp = num
    while temp > 0:
        digit = temp % 10
        sum += digit ** n
        temp //= 10

    if num == sum:
        print(num)
