import functools
for num in range(1, 1001):
    save_num = int(num)
    list1 = []
    for idx in range(1, int(num)):
        if num % idx == 0:
            list1.append(idx)
    if functools.reduce(lambda x, y: x+y, list1, 0) == save_num:
        print(save_num, list1)
