def output(s, l):
    if l == 0:
        return
    print(s[l-1], end="")
    output(s, l-1)


s = input('Enter a string ')
output(s, len(s))
print(end="\n")
