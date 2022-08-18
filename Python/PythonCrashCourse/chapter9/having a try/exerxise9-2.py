class Restaurant:

    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type

    def describe_restaurant(self):
        print(f"{self.restaurant_name} sells {self.cuisine_type} diet.")

    def open_restaurant(self):
        print(f"The restaurant {self.restaurant_name} is open now.")


restaurant0 = Restaurant('Bianco & Rosso', 'house of vermouth')
print(f"The restaurant0 name is {restaurant0.restaurant_name}.")
print(f"This restaurant0 sells {restaurant0.cuisine_type}")
restaurant0.describe_restaurant()
restaurant0.open_restaurant()

restaurant1 = Restaurant('Breeze Bistro', 'seaside')
print(f"The restaurant1 name is {restaurant1.restaurant_name}.")
print(f"This restaurant1 sells {restaurant1.cuisine_type}")
restaurant1.describe_restaurant()
restaurant1.open_restaurant()

restaurant2 = Restaurant('Tandoori Bites', 'Indian')
print(f"The restaurant2 name is {restaurant2.restaurant_name}.")
print(f"This restaurant2 sells {restaurant2.cuisine_type}")
restaurant2.describe_restaurant()
restaurant2.open_restaurant()
