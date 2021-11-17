import time


def date_count(date):
    date0 = date[0:4] + "-01-01"
    datet = time.strptime(date, "%Y-%m-%d")
    date0t = time.strptime(date0, "%Y-%m-%d")
    dates = time.mktime(datet)
    date0s = time.mktime(date0t)
    count = (dates-date0s)/(3600*24)
    return count+1


a = input("Enter the year: xxxx-xx-xx ")
print("{} is {} year, the {}th day".format(a, a[0:4], int(date_count(a))))
