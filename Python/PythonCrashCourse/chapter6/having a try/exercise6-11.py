cities = {
    'shanghai': {
        'country': 'china',
        'population': 2.5e7,
        'fact': 'The richest city in China',
    },
    'tokyo': {
        'country': 'japan',
        'population': 3.6e7,
        'fact': 'Japan\'s capital and the world\'s most populous metropolis',
    },
    'moscow': {
        'country': 'russia',
        'population': 1.5e7,
        'fact': 'The biggest city in russia',
    },
}

for city_name, city_info in cities.items():
    print(f"{city_name.title()}")
    for entry, content in city_info.items():
        if entry == 'population':
            print(f"\t{entry.title()} is about {int(content):_}")
        else:
            print(f"\t{entry.title()}: {content.title()}")
