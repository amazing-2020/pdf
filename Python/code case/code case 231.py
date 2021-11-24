a = ["one", "two", "three"]
for i in a[::-1]:
    print(i)

print(a[-1::-1])

a.reverse()
print(a)

a.sort(reverse=True)
print(a)
