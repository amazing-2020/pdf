a = [12, 45, 86, 99, 1, 56, 78, 55]
print(a)
min = min(a)
a.remove(min)
a.append(min)
max = max(a)
a.remove(max)
a.insert(0, max)
print(a)
