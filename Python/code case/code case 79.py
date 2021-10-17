class Test:
    def ptr(self):
        print(self)
        print(self.__class__)


class Test2:
    def ptr(baidu):
        print(baidu)
        print(baidu.__class__)


class people:
    name = ''
    age = 0
    __weight = 0

    def __init__(self, n, a, w):
        self.name = n
        self.age = a
        self.__weight = w

    def speak(self):
        print('%s said: I %d ages' % (self.name, self.age))


t = Test()
t.ptr()

t2 = Test2()
t2.ptr()

p = people('baidu', 10, 30)
p.speak()
