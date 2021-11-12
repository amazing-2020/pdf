class Test:
    def prt(self):
        print(self)
        print(self.__class__)


class Test2:
    def prt(runoob):
        print(runoob)
        print(runoob.__class__)


t = Test()
t.prt()
t2 = Test2()
t2.prt()
