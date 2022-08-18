from car_9_4 import Car


class Battery:
    def __init__(self, battery_size=75):
        self.battery_size = battery_size

    def describe_battery(self):
        print(f"This car has a {self.battery_size}-KWH battery.")

    def get_range(self):
        range_ = 0
        if self.battery_size == 75:
            range_ = 260
        elif self.battery_size == 100:
            range_ = 315
        print(f"This car can go about {range_} miles on a full charge.")


class ElectricCar(Car):
    def __init__(self, make, model, year):
        super().__init__(make, model, year)
        self.battery = Battery()
