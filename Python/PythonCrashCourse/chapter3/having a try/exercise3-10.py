favorite = ['Sydney Opera House', 'Bagan', 'Forbidden City', 'Borobudur', 'Stonehenge', 'Grand Canyon', 'Petra', 'Angkor Wat', 'Great Wall of China']
print(favorite)
favorite.append('Watermelon')
print(favorite)
favorite.insert(0, 'girls')
print(favorite)
del favorite[0]
print(favorite)
popped_favorite = favorite.pop()
print(popped_favorite, favorite)
popped_favorite = favorite.pop(2)
print(popped_favorite, favorite)
favorite.insert(2, popped_favorite)
print(favorite)
favorite.remove('Bagan')
print(favorite)
favorite.sort()
print(favorite)
favorite.sort(reverse=True)
print(favorite)
print(sorted(favorite))
favorite = ['Sydney Opera House', 'Bagan', 'Forbidden City', 'Borobudur', 'Stonehenge', 'Grand Canyon', 'Petra', 'Angkor Wat', 'Great Wall of China']
favorite.reverse()
print(favorite)
print(len(favorite))