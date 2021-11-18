from functools import reduce

year = int(input('year:\n'))
month = int(input('month:\n'))
day = int(input('day:\n'))

mday = [0, 31, 28 if year % 4 else 29 if year % 10 else 28 if year % 4 else 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
print("{} is {} year, the {}th day".format(year, month, day, reduce(lambda x,y:x+y, mday[:month])+day))

