for i in range(1, 10):
    for j in range(1, i+1):
        print("{}x{}={}\t".format(j, i, j*i), end='')
    print()


class MultiplicationTable():
    def paint(self, n=9):
        for row in range(1, n+1):
            for col in range(1, row + 1):
                print("{1}x{0}={2}\t".format(row, col, row * col), end='')
            print()


table = MultiplicationTable()
table.paint()
table.paint(10)
