class Restaurant:

    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"{self.restaurant_name} sells {self.cuisine_type} diet.")

    def open_restaurant(self):
        print(f"The restaurant {self.restaurant_name} is open now.")


restaurant = Restaurant('Lanzhou', 'Noodle')
print(f"The restaurant name is {restaurant.restaurant_name}.")
print(f"This restaurant sells {restaurant.cuisine_type}")
restaurant.describe_restaurant()
restaurant.open_restaurant()
