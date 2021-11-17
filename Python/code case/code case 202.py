import time

d = input("Enter the year: xxxx-xx-xx ")
D = time.strptime(d, "%Y-%m-%d").tm_yday
print('The {} day of this year!'.format(D))
