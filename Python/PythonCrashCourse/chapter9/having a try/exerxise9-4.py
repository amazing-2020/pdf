class Restaurant:

    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0

    def describe_restaurant(self):
        print(f"{self.restaurant_name} sells {self.cuisine_type} diet.")

    def open_restaurant(self):
        print(f"The restaurant {self.restaurant_name} is open now.")

    def set_number_served(self, served):
        self.number_served = served

    def increment_number_served(self, people):
        self.number_served += people


restaurant = Restaurant('Lanzhou', 'Noodle')
restaurant.set_number_served(80)
print(restaurant.number_served)
restaurant.increment_number_served(50)
print(restaurant.number_served)
