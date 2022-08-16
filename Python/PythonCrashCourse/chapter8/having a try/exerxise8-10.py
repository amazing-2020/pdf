def show_message(strings):
    for string in strings:
        print(string)


def send_message(unprinted_message, result_message):
    while unprinted_message:
        current_message = unprinted_message.pop()
        print(current_message)
        result_message.append(current_message)


msg = ['hello', 'good', 'oh my god', 'you are a good boy']
show_message(msg)

result_msg = []
send_message(msg, result_msg)
print(msg)
print(result_msg)
