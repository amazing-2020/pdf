from random import randrange, shuffle


def bubble_sort():
    array = []
    while len(array) < 12:
        array.append(randrange(-99, 101, 3))
    shuffle(array)
    print(array)
    for i in range(12):
        for j in range(11 - i):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
    print("After sort:", array)


bubble_sort()
