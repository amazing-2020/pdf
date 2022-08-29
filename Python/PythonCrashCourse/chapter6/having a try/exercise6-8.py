pet_0 = {'type': 'cat', 'owner': 'Galileo Galilei'}
pet_1 = {'type': 'dog', 'owner': 'Albert.Einstein'}
pet_2 = {'type': 'pig', 'owner': 'James Clerk Maxwell'}
pet_3 = {'type': 'ant', 'owner': 'Niels Henrik David Bohr'}
pet_4 = {'type': 'shark', 'owner': 'Max Karl Ernst Ludwig Planck'}
pet_5 = {'type': 'dolphin', 'owner': 'Michael Faraday'}

pets = [pet_0, pet_1, pet_2, pet_3, pet_4, pet_5]

for pet in pets:
    print(f"Pet type: {pet['type']}, owner: {pet['owner']}.")
