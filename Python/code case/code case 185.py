class Parent:
    parent_attr = 100

    def __init__(self):
        print("Call the parent class constructor")

    def parent_method(self):
        print("Call the parent function")

    def set_attr(self, attr):
        Parent.parent_attr = attr

    def get_attr(self):
        print("Parent attribute ", Parent.parent_attr)


class Child(Parent):

    def __init__(self):
        print("Call the son class constructor")

    def child_method(self):
        print("Call the son function")


c = Child()
c.child_method()
c.parent_method()
c.set_attr(200)
c.get_attr()
