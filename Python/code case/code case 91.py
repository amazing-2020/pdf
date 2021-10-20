print(max(1, 2))
print(max('a', 'b'))
print(max([1, 2]))
print(max((1, 2)))

print('Tha max value in (80, 100, 1000, -100)', max(80, 100, 1000, -100))

N = int(input('Enter the number of the numbers you want to compare: '))
print('Enter the numbers')
num = []
for i in range(1, N+1):
    temp = int(input('Enter the %dth number ' % i))
    num.append(temp)

print(num)
print("Max = ", max(num))
