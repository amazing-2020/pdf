def isnumber(s):
    try:
        float(s)
        return True
    except ValueError:
        pass

    try:
        import unicodedata
        unicodedata.numeric(s)
        return True
    except (TypeError, ValueError):
        pass
    return False


print(isnumber('foo'))
print(isnumber('1'))
print(isnumber('123'))
print(isnumber('1.3'))
print(isnumber('1e3'))
print(isnumber('-1.37'))

# 阿拉伯语 5
print(isnumber('٥'))  # True
# 泰语 2
print(isnumber('๒'))  # True
# 中文数字
print(isnumber("四"))  # True
# 版权号
print(isnumber('©'))  # False
