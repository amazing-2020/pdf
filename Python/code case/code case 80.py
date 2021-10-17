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


class student(people):
    grade = ''

    def __init__(self, n, a, w, g):
        people.__init__(self, n, a, w)
        self.grade = g

    def speak(self):
        print('%s said: I %d ages, I am at %dth grade' % (self.name, self.age, self.grade))


s = student('Ken', 10, 60, 3)
s.speak()
