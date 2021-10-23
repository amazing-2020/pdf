from functools import reduce
import math

sum = reduce(lambda x, y: x * y, range(1, 10))
print(sum)

num = int(input("Please enter a integer: "))
if num < 0:
    print('Errors!')
else:
    print("{0}! = {1}".format(num, math.factorial(num)))
