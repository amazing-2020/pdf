if __name__ == '__main__':
    zi = int(input('Enter a number:\n'))
    n1 = 1
    c9 = 1
    m9 = 9
    sum = 9
    while n1 != 0:
        if sum % zi == 0:
           n1 = 0
        else:
            m9 *= 10
            sum += m9
            c9 += 1
    print('%d \'9\' could to be divisible by %d' % (c9, zi))
    r = sum / zi
    print('%d / %d = %d' % (sum, zi, r))
