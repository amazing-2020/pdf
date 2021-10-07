import sys
list1 = [1, 2, 3, 4]
it = iter(list1)
for x in it:
    print(x, end=" ")
print('')
it = iter(list1)
while True:
    try:
        print(next(it))
    except StopIteration:
        sys.exit()
