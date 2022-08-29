def make_sandwich(*ingredients):
    print("You add these ingredients for your sandwich: ")
    for ingredient in ingredients:
        print(f"\t{ingredient}")


make_sandwich('cheese', 'tomato', 'potato')
make_sandwich('egg', 'muffin', 'onion', 'pepper')
make_sandwich('pork', 'beef')
