class A:
    def foo(self):
        print('called A.foo')


class B(A):
    pass


class C(A):
    def foo(self):
        print('Call C.foo')


class D(B, C, object):
    pass


class F(B, C):
    pass


if __name__ == '__main__':
    d = D()
    d.foo()
    f = F()
    f.foo()
