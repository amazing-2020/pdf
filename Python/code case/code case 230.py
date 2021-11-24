a = int(input("Enter a number:\n"))
x = str(a)
flag = True

for i in range(len(x)//2):
    if x[i] != x[-i-1]:
        flag = False
        break
if flag:
    print("%d is a palindrome" % a)
else:
    print("%d is not a palindrome" % a)
