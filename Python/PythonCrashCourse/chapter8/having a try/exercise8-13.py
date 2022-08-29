def build_profile(first, last, **user_info):
    user_info['first_name'] = first
    user_info['last_name'] = last
    return user_info


my_info = build_profile('john', 'jordan', age=18, city='london', weight='60kg')
print(my_info)
