import sys

for i in range(4):
    for j in range(2 - i + 1):
        sys.stdout.write(" ")
    for k in range(2 * i + 1):
        sys.stdout.write("*")
    print()
for i in range(3):
    for j in range(i + 1):
        sys.stdout.write(" ")
    for k in range(4 - 2 * i + 1):
        sys.stdout.write("*")
    print()
