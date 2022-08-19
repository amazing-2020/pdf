import random


class Die:
    def __init__(self, sides=6):
        self.sides = sides

    def roll_die(self):
        numbers = []
        for i in range(0, 10):
            numbers.append(random.randint(1, self.sides))
        return numbers


my_die = Die()
print(my_die.roll_die())

my_die = Die(10)
print(my_die.roll_die())

my_die = Die(20)
print(my_die.roll_die())
