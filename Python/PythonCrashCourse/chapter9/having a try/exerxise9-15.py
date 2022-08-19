import random


caipiao = ('a', 'd', 'f', 'v', 't', 1, 7, 8, 9, 0, 4, 99, 10, 56, 4)
my_ticket = ['a', 'f', 0, 99]
my_try = []
j = 0
while True:
    for i in range(0, 4):
        my_try.append(random.choice(caipiao))
    j += 1
    if my_try == my_ticket:
        break
    else:
        my_try = []
print(f"After {j} times, you win the lottery.")
