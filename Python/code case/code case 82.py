class Parent:
    def myMethod(self):
        print("The father's methods")


class Child(Parent):
    def myMethod(self):
        print("The methods of child")

c = Child()
c.myMethod()
super(Child, c).myMethod()
