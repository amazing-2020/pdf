def hello_world():
    print('Hello, python')


def hello_worlds():
    for i in range(3):
        hello_world()


if __name__ == '__main__':
    hello_worlds()
