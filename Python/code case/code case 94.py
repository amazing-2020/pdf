num = int(input('Enter a integer: '))


def getPrimeList(n, oldPrimeList):
    for prime in oldPrimeList:
        if (n % prime) == 0:
            break
        if prime == oldPrimeList[-1]:
            oldPrimeList.append(n)


if num == 2 or num == 3:
    print(num, 'is prime number')
elif num > 3:
    judge_num = int(num ** 0.5) + 1
    primelist = [2]
    for i in range(2, judge_num):
        getPrimeList(i, primelist)
    for i in primelist:
        if (num % i) == 0:
            print(num, 'is not a prime number')
            break
    else:
        print(num, 'is a prime')
    print(primelist)
else:
    print(num, 'is not prime')
