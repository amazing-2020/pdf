class Restaurant:

    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"{self.restaurant_name} sells {self.cuisine_type} diet.")

    def open_restaurant(self):
        print(f"The restaurant {self.restaurant_name} is open now.")


class IceCreamStand(Restaurant):
    def __init__(self, restaurant_name, cuisine_type):
        super(IceCreamStand, self).__init__(restaurant_name, cuisine_type)
        self.flavors = []

    def show_icecream(self, my_flavor):
        self.flavors = my_flavor[:]
        print(f"{self.restaurant_name} have these icecream:")
        for flavor in self.flavors:
            print(f"\t{flavor}")


icecream = IceCreamStand('Messina', 'cold drink')
icecream_types = ['vegan sorbet', 'Messina’s gelato', 'Holly Brown']
icecream.show_icecream(icecream_types[:])
