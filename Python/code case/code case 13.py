# set
sites = {'google', 'baidu', 'bing', 'stack overflow', 'microsoft'}

print(sites)

if 'baidu' in sites:
    print("baidu is in the set")
else:
    print("baidu is not in the set")

a = set('sadfsdfad')
b = set('sdfdsfsdcccc')

print(a)
print(a - b)
print(a | b)
print(a & b)
print(a ^ b)
