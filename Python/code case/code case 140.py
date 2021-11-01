def rotate(input2, d):
    Lfirst = input2[0:d]
    Lsecond = input2[d:]
    Rfirst = input2[0: len(input2) - d]
    Rsecond = input2[len(input2) - d:]

    print('Head slice flip:', (Lsecond + Lfirst))
    print('Tail slice flip:', (Rsecond + Rfirst))


if __name__ == '__main__':
    String2 = input('Enter a string: ')
    d = 2
    rotate(String2, d)
