def main():
    fish = 1
    while True:
        total, enough = fish, True
        for _ in range(5):
            if (total - 1) % 5 == 0:
                total = ((total - 1) // 5) * 4
            else:
                enough = False
                break
        if enough:
            print(f'There is {fish} fish at all')
            break
        fish += 1


if __name__ == '__main__':
    main()
