my_foods = ['pizza', 'falafel', 'carrot cake']
friends_foods = my_foods[:]

my_foods.append('cannoli')
friends_foods.append('ice cream')

print("My favorite foods are")
print(my_foods)
for my_food in my_foods:
    print(my_food)

print("\nMy friend's favorite foods are")
print(friends_foods)
for friends_food in friends_foods:
    print(friends_food)
