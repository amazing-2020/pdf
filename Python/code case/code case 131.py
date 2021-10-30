total = 0

list1 = [11, 5, 17, 18, 23]

for ele in range(0, len(list1)):
    total += list1[ele]

print("sum = {}".format(total))

# next function

total = 0
ele = 0

while ele < len(list1):
    total += list1[ele]
    ele += 1
print("sum = {}".format(total))

# next function


def sumoflist(list, size):
    if (size == 0):
        return 0
    else:
        return list[size - 1] + sumoflist(list, size - 1)


total = sumoflist(list1, len(list1))
print("sum = {}".format(total))
