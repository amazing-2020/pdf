f1 = open("./code case 64.txt", 'w')
num = f1.write("Python is a good language.\nYes, it's great!\n")
print(num)
f1.close()

f2 = open("./code case 64.1.txt", 'w')
value = ("www.google.com", 14)
s = str(value)
f2.write(s)
f2.close()
