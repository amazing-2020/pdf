import calendar

year = int(input('year:\n'))
month = int(input('month:\n'))
day = int(input('day:\n'))
sum = 0

if 0 < month <= 12:
    _, month_day = calendar.monthrange(year, month)
    if day <= month_day:
        for m in range(1, month):
            _, month_day = calendar.monthrange(year, m)
            sum += month_day
        sum += day
        print(sum, "days")
    else:
        print("Error")
else:
    print("Error")
