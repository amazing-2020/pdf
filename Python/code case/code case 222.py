class function:
    length = 21

    def __init__(self, length):
       self.length = length

    def sum1(self):
        s = 0
        t = 1
        for n in range(1, self.length):
            t *= n
            s += t
        print("sum = %d" % s)

    def sum2(self):
        s = 0
        l = range(1, self.length)

        def op(x):
            r = 1
            for i in range(1, x+1):
                r *= i
            return r

        s = sum(map(op, l))
        print("sum = %d" % s)


fun = function(21)
fun.sum1()
fun.sum2()
