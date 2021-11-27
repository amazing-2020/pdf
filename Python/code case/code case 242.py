if __name__ == '__main__':
    a = [1, 4, 6, 9, 13, 16, 19, 28, 40, 100, 0]
    print('ordinary list')
    print(a)
    num = int(input("Enter a num "))
    end = a[9]
    if num > end:
        a[10] = num
    else:
        for i in range(10):
            if a[i] > num:
                temp1 = a[i]
                a[i] = num
                for j in range(i+1, 11):
                    temp2 = a[j]
                    a[j] = temp1
                    temp1 = temp2
                break
    print("After sort")
    print(a)
# when num == 100, a[10] = 0  ?????, error
