motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)

# use del sentence
del motorcycles[0]
print(motorcycles, '\n')

motorcycles = ['honda', 'yamaha', 'suzuki']
del motorcycles[1]
print(motorcycles, '\n')
#  use pop method
motorcycles = ['honda', 'yamaha', 'suzuki']
print(motorcycles)
popped_motorcycles = motorcycles.pop()
print(motorcycles)
print(popped_motorcycles)
#  pop any item in the list
motorcycles = ['honda', 'yamaha', 'suzuki']
first_owned = motorcycles.pop(0)
print(f"The first motorcycle I owned was a {first_owned.title()}.\n")
# delete item by value
motorcycles = ['honda', 'yamaha', 'suzuki', 'ducati']
print(motorcycles)
too_expensive = 'ducati'
motorcycles.remove(too_expensive)
print(motorcycles)
print(f"\n{too_expensive.title()} is too expensive for me.\n")
