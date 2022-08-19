import random


caipiao = ('a', 'd', 'f', 'v', 't', 1, 7, 8, 9, 0, 4, 99, 00, 56, 4)
print("If your lottery ticket is this, you win the lottery")
for i in range(0, 4):
    print(random.choice(caipiao), end=" ")
print()
