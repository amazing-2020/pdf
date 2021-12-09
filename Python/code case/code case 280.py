if __name__ == '__main__':
    n = s = 0
    L = []
    n = input("Enter a octal number:\n")
    for i in range(len(n)):
        L.append(n[i])
    L.reverse()
    for i in range(len(n)):
        s = s + int(L[i]) * (8**i)
    print(s)
