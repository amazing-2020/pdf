if __name__ == '__main__':
    import time
    import random

    play_it = input("do you want to play it?(\'y\' or \'n\')")
    while play_it == 'y':
        c = input('input a character:\n')
        i = random.randint(0, 2**32) % 100
        print('please input the number you guess:\n')
        start = time.perf_counter()
        a = time.time()
        guess = int(input('input your guess:\n'))
        while guess != i:
            if guess > i:
                print('please input a little smaller')
                guess = int(input('input your guess:\n'))
            else:
                print('please input a little bigger')
                guess = int(input('input your guess:\n'))
        end = time.perf_counter()
        b = time.time()
        var = (end - start) / 18.2
        print(var)
        if var < 15:
            print("You are very clever.")
        elif var < 25:
            print('You are normal!')
        else:
            print('You are stupid')
        print('Congratulations')
        print('The number you guess is %d' % i)
        play_it = input("do you want to play it?(\'y\' or \'n\')")
