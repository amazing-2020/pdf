class JustCounter:
    __secretCount = 0
    publicCount = 0

    def count(self):
        self.__secretCount += 1
        self.publicCount += 1
        print(self.__secretCount)

    def count2(self):
        print(self.__secretCount)


counter = JustCounter()
counter.count()
counter.count()
print(counter.publicCount)
print(counter._JustCounter__secretCount, ">>>")
try:
    counter.count2()
except IOError:
    print("Can't call private attribute")
else:
    print("Ok")
