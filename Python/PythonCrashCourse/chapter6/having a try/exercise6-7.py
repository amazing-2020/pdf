person_0 = {'first_name': 'mike', 'last_name': 'jordan', 'age': 66, 'city': 'new york'}
person_1 = {'first_name': 'john', 'last_name': 'weston', 'age': 18, 'city': 'pairs'}
person_2 = {'first_name': 'hale', 'last_name': 'elisabeth', 'age': 35, 'city': 'london'}

people = [person_0, person_1, person_2]

for person in people:
    print(f"{person['first_name'].title()} {person['last_name'].title()} {person['age']} live in "
          f"{person['city'].title()}")
