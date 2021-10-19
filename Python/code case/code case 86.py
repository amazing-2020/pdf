import random


class Computer(object):

    def __init__(self):
        pass

    g_num = 0

    def getnum(start, end):
        return random.randint(start, end)

    def control(ctl_str):
        global g_num
        if ctl_str == '1' or ctl_str == 'L':
            g_num -= 1
            if g_num < 0:
                g_num = 23
        elif ctl_str == 'r' or ctl_str == 'R':
            g_num += 1
            if g_num > 23:
                g_num = 0
        return g_num

    def printspace(spacenum):
        print_content = ['-']*24
        print_content = ''.join(print_content)
        l_content = list(print_content)
        l_content[spacenum] = '*'
        l_content = ''.join(l_content)
        print(l_content)


if __name__ == '__main__':
    g_num = Computer.getnum(0, 24)
    Computer.printspace(g_num)
    while True:
        ctr_str = input('Enter L/l or R/r : ')
        if ctr_str.upper() == 'EXIT':
            break
        g_num = Computer.control(ctr_str)
        Computer.printspace(g_num)
