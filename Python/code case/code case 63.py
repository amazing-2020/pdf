f1 = open("./code case 62.py", 'r')
str1 = f1.read()
print(str1)
f1.close()

print('-------------')
f2 = open("./code case 63.py", 'r')
str2 = f2.readline()
print(str2)
f2.close()

print('----------------')
f3 = open("./code case 62.py", 'r')
str3 = f3.readlines()
print(str3)
f3.close()

print('------------------')
f3 = open("./code case 62.py", 'r')
for line in f3:
    print(line, end='')
f3.close()
