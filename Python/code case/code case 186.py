class Parent:
    def my_method(self):
        print('Call father class method')


class Child(Parent):
    def my_method(self):
        print('Call son class method')


c = Child()
c.my_method()
