prompt = "How ald are you? "
prompt += "Enter 'quit' to end the program.\n"

active = True
while active:
    age = input(prompt)

    if age == 'quit':
        active = False
    elif int(age) < 3:
        print("Your price is free")
    elif int(age) < 12:
        print("Your price is $10")
    else:
        print("Your price is $15")
