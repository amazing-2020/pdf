if __name__ == '__main__':
    from sys import stdout
    filename = input("Enter the file name:")
    fp = open(filename, 'w')
    ch = input('Enter a string:\n')
    while ch != '#':
        fp.write(ch)
        stdout.write(ch)
        ch = input('')
    fp.close()
