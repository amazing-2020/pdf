dinner_name = ['Liam Olivia', 'Noah emma', 'Theodore Harper', 'Henry Evelyn']
print(f"Dear {dinner_name[0].title()},please have a dinner with me.")
print(f"Dear {dinner_name[1].title()},please have a dinner with me.")
print(f"Dear {dinner_name[2].title()},please have a dinner with me.")
print(f"Dear {dinner_name[3].title()},please have a dinner with me.")
absent_dinner = dinner_name.pop(1)
print(f"{absent_dinner.title()} can't join the dinner.")
dinner_name.insert(1, 'Benjamin Isabella')
print(f"Dear {dinner_name[0].title()},please have a dinner with me.")
print(f"Dear {dinner_name[1].title()},please have a dinner with me.")
print(f"Dear {dinner_name[2].title()},please have a dinner with me.")
print(f"Dear {dinner_name[3].title()},please have a dinner with me.")
