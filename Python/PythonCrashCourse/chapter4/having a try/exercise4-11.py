pizzas = ['法棍披萨', '烤通心粉披萨', '纽约披萨片', '意大利白披萨']
for pizza in pizzas:
    print(f"I like {pizza}")
print("I really love pizza")

friend_pizzas = pizzas[:]
friend_pizzas.append('沙拉披萨')
print("My favorite pizzas are")
for pizza in pizzas:
    print(pizza)
print("My friend's favorite pizzas are")
for friend_pizza in friend_pizzas:
    print(friend_pizza)
