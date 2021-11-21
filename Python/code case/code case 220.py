for i in range(1, 5):
    print(" "*(4-i), end="")
    for j in range(1, 2*i):
        print("*", end="")
    print()
for i in range(1, 4):
    print(" "*(i), end="")
    for j in range(7-2*i):
        print("*", end="")
    print()
