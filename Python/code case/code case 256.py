def BUILD_UNIT16(x, y):
    z = 0
    z = x << 8
    x += y
    print('0x%x, 0x%x' %(x, z))
    return z


if __name__ == '__main__':
    a = 0x77
    b = a & 3
    print("a & b = %d" % b)
    b &= 7
    print('a & b = %d' % b)

    print('0x%x' % (BUILD_UNIT16(0x11, 0xff)))
