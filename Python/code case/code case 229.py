import sys

s = 12345
s = str(s)[::-1]
print("%d bit nums" % len(s))
for i in range(len(s)):
    sys.stdout.write(s[i] + " ")
