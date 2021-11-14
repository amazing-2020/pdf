class Cat:
    def __init__(self, new_name, new_age):
        self.name = new_name
        self.age = new_age

    def __str__(self):
        return "name: %s, age: %d." % (self.name, self.age)

    def eat(self):
        print("%s eat fish." % self.name)

    def drink(self):
        print("%s is drinking Cola..." % self.name)

    def introduce(self):
        print("name: %s, age: %d.." % (self.name, self.age))


tom = Cat("Tom", 30)
print(tom)
