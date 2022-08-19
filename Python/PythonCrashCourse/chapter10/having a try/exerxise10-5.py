filename = 'reason10-5.txt'
while True:
    reason = input("Why you love programming(q to end): ")
    if reason == 'q':
        break
    else:
        with open(filename, 'a') as file_object:
            file_object.write(f"{reason.title()}.\n")
