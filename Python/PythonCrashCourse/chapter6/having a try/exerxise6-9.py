favorite_places = {
    'mike': ['beijing', 'shanghai', 'taipei'],
    'alice': ['new york', 'new king mountain', 'Ottawa'],
    'Louise': ['pairs', 'Bordeaux', 'Marseille'],
}

for name, places in favorite_places.items():
    print(f"{name.title()}'s favorite place is:")
    for place in places:
        print(f"\t{place.title()}")
