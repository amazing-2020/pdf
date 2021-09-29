a, b, c, d = 20, 5.5, True, 4 + 3j
print(type(a), type(b), type(c), type(d))
print(isinstance(a, int))


class A:
    pass


class B(A):
    pass


print(isinstance(A(), A))
print(type(A()) == A)
print(isinstance(B(), A))
print(type(B()) == A)
