import calendar

yy = int(input('Enter year '))
mm = int(input('Enter month '))

print(calendar.month(yy, mm))

calendar.setfirstweekday(firstweekday=6)
print(calendar.month(yy, mm))

print('*'*12)
for i in range(12):
    print(calendar.month(yy, i + 1))
    print('*'*12)
