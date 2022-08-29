prompt = "The crust, the sauce, cheese and topping\n"
prompt += "Vegetables (carrot, tomatoes, mushrooms, onions, olives, beans, peppers, spinach)\n"
prompt += "Nuts (almonds, peanuts, pistachios, pine nuts, walnuts, and more).\n"
prompt += "Enter 'quit' to end the program.  "

active = True
while active:
    pizza = input(prompt)

    if pizza == 'quit':
        active = False
    else:
        print(f"\nWe add {pizza}!\n")
