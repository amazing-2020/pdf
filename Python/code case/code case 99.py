nterms = int(input('Which element you want: '))

n1 = 0
n2 = 1
count = 2

if nterms <= 0:
    print('Enter a integer.')
elif nterms == 1:
    print(n1)
else:
    print(n1, ',', n2, end=' , ')
    while count < nterms:
        nth = n1 + n2
        print(nth, end=' , ')
        n1 = n2
        n2 = nth
        count += 1
