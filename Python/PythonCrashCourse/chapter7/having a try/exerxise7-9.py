sandwich_orders = ['Chicken Sandwich', 'Seafood Sandwich', 'Pastrami', 'Roast Beef Sandwich', 'Pastrami', 'Pastrami']

finished_sandwiches = []
print("Our Pastrami sold out now")
for sandwich_order in sandwich_orders:
    if sandwich_order == 'Pastrami':
        continue
    print(f"I made {sandwich_order}")
    finished_sandwiches.append(sandwich_order)

print(f"{finished_sandwiches} are finished")
