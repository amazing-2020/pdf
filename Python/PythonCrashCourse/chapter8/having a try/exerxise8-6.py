def city_country(city, country):
    return f"\"{city.title()}, {country.title()}\""


print(city_country('london', 'england'))
print(city_country("berlin", 'german'))
print(city_country('copenhagen', 'denmark'))
