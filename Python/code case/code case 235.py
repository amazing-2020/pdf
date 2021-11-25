lower = int(input("Enter the min: "))
upper = int(input("Enter the max: "))

for num in range(lower, upper+1):
    if num > 1:
        for i in range(2, num):
            if num % i == 0:
                break
        else:
            print(num)

n = 0
for num in range(lower, upper+1):
    if num > 1:
        for i in range(2, num//2 + 1):
            if num % i == 0:
                break
        else:
            print(num)
            n += 1
print(n, "items")
