n = int(input('n = '))
a = int(input('a = '))
Su = 0
Tu = []
for i in range(n):
    Tu.append(int(str(a)*(i+1)))
print("The list:", Tu)
Su = sum(Tu)
for i in Tu:
    Su += i
print("Sum: ", Su)
