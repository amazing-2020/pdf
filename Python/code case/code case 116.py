def min_fish(n):
    return n**n - (n-1)


if __name__ == '__main__':
    n = int(input('Enter the number of the people: '))
    print('{0} fish'.format(min_fish(n)))
