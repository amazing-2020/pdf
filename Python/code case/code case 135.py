import re


def find(string):
    url = re.findall('https?://(?:[-\w.]|(?:%[\da-fA-F]{2}))+', string)
    return url


string = "Runoob 的网页地址为：https://www.runoob.com，Google 的网页地址为：https://www.google.com"
print("urls: ", find(string))
