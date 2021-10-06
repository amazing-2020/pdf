i = 1
while i <= 9:
    j = 1
    while j <= i:
        mut = j*i
        print("%d*%d=%d" % (j, i, mut), end=' ')
        j += 1
    print('')
    i += 1
for i in range(1, 6):
    for j in range(1, i+1):
        print('*', end='')
    print('\r')
print(sum(range(101)))
