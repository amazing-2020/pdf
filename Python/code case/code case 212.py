a = str \
    (input("Enter a line characters"))
count1 = 0
count2 = 0
count3 = 0
count4 = 0
others = []
for i in range(len(a)):
    if a[i].isdigit():
        count1 += 1
    elif a[i].isalpha():
        count2 += 1
    elif a[i].isspace():
        count3 += 1
    else:
        count4 += 1
        others.append(a[i])

print('char = {1}, space = {2}, num = {0}, others = {3}'.format(count1, count2, count3, count4))
print(others)
