def need(n, r):
    if n % 5 == 1:
        if r == 5:
            return True
        else:
            return need(n - (n-1) / 5 - 1, r + 1)
    else:
        return False


n = 6
while True:
    if need(n, 1):
        break
    else:
        n += 5
print(n)
