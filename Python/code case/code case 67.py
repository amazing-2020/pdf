from urllib import request

response = request.urlopen("https://www.bing.com")
fi = open('./code case 67.txt', 'w')
page = fi.write(str(response.read()))
fi.close()
