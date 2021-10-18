class JustCounter:
    __secretCount = 0
    publicCount = 0

    def count(self):
        self.__secretCount += 1
        self.publicCount += 1
        print(self.__secretCount)


counter = JustCounter()
counter.count()
counter.count()
print(counter.publicCount)
# print(counter.__secretCount)


class Site:
    def __init__(self, name, url):
        self.name = name
        self.__url = url

    def who(self):
        print("name  :  ", self.name)
        print("url  :  ", self.__url)

    def __foo(self):
        print('The private method')

    def foo(self):
        print('The public method')
        self.__foo()


x = Site("百度", "www.baidu.com")
x.who()
x.foo()
# x.__foo()

# 注释都是对于私有方法的调用
