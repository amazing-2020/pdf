cube = [i ** 3 for i in range(1, 11)]
for i in cube:
    print(i)
print(f"The first item is {cube[0:3]}")
print(f"The middle item is {cube[3:6]}")
print(f"The last item is {cube[-3:]}")
