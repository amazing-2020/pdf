pizza = {
    'price': 99,
    'crust': 'thick',
    'toppings': ['mushrooms', 'extra cheese', 'tomato'],
}

print(f"You ordered a {pizza['crust']}-crust pizza "
      f"with the following toppings:")

for topping in pizza['toppings']:
    print('\t'+topping)
print(f"Please pay ${pizza['price']}.")

