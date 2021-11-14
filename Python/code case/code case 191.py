class CA(object):
    cls_pre = 'aaaa'

    def __init__(self):
        self.obj_pre = 'bbbb'


a = CA()
b = CA()

print(a.cls_pre, a.obj_pre)
print(b.cls_pre, b.obj_pre)

CA.cls_pre = 'cccc'
c = CA()
d = CA()

d.cls_pre = 'dddd'

print(a.cls_pre, a.obj_pre)
print(b.cls_pre, b.obj_pre)
print(c.cls_pre, c.obj_pre)
print(d.cls_pre, d.obj_pre)
