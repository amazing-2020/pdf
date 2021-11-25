if __name__ == '__main__':
    N = 10
    print("Enter 10 numbers: ")
    l = []
    for i in range(N):
        l.append(int(input("Enter a number: ")))
    print()
    print(l)

    for i in range(N - 1):
        min = i
        for j in range(i + 1, N):
            if l[min] > l[j]:
                min = j
            l[i], l[min] = l[min], l[i]
        print("After sort: ")
        for i in range(N):
            print(l[i])
