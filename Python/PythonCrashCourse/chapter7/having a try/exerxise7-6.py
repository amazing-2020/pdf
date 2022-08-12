prompt = "The crust, the sauce, cheese and topping\n"
prompt += "Vegetables (carrot, tomatoes, mushrooms, onions, olives, beans, peppers, spinach)\n"
prompt += "Nuts (almonds, peanuts, pistachios, pine nuts, walnuts, and more).\n"
prompt += "Enter 'quit' to end the program.  "

while True:
    pizza = input(prompt)

    if pizza == 'quit':
        break
    else:
        print(f"\nWe add {pizza}!\n")
#  another way
pizza = ""
while pizza != 'quit':
    pizza = input(prompt)

    if pizza != 'quit':
        print(f"\nWe add {pizza}!\n")
