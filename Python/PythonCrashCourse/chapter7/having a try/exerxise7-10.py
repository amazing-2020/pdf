names = ['jack', 'mike', 'john', 'jordan']
vacation_spots = {}

for name in names:
    destinations = []
    active = True

    prompt = f"Dear {name.title()}, if you would like to visit one place in the world, where would you go?\n"
    prompt += "Enter 'q' to end the program.\n"
    while active:
        destination = input(prompt)
        if destination == 'quit':
            active = False
        else:
            destinations.append(destination)
    vacation_spots[name] = destinations

for name, spots in vacation_spots.items():
    if not spots:
        print(f"{name.title()} didn't tell me his/her spot")
    else:
        print(f"{name}'s dreaming vacation spot is: ")
        for spot in spots:
            print(f"\t{spot}")
