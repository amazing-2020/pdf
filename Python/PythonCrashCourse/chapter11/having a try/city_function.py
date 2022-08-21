def city_and_country(city, country, population=None):
    if population:
        info = f"{city.title()} {country.title()} - population {population}"
    else:
        info = f"{city.title()} {country.title()}"

    return info
