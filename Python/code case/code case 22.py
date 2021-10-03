import cmath

a = float(input('input a: '))
b = float(input('input b: '))
c = float(input('input c: '))

d = (b**2) - (4*a*c)
slo1 = (-b - cmath.sqrt(d)) / (2 * a)
slo2 = (-b + cmath.sqrt(d)) / (2 * a)
print('The result is {0} and {1}'.format(slo1, slo2))
