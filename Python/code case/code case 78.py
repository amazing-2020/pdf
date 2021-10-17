class MyClass:
    i = 12345
    def f(self):
        return 'hello world'


class Complex:
    def __init__(self, realpart, imagpart):
        self.r = realpart
        self.i = imagpart


x = MyClass()
print('MyClass class attributes i is: ', x.i)
print('MyClass claas methods output is: ', x.f())

x = Complex(3.0, -4.5)
print(x.r, x.i)
