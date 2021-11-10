def count_sort(arr):
    count = [0 for i in range(256)]
    output = ["" for _ in arr]
    mx = 0
    mn = 255
    for i in arr:
        idx = ord(i)
        if idx > mx: mx = idx
        if idx < mn: mn = idx
        count[idx] += 1
    idx = 0
    for i in range(mn, mx + 1):
        if count[i] == 0: continue
        for _ in range(count[i]):
            output[idx] = chr(i)
            idx += 1
    return output


arr = "wwwbaiducom"
ans = count_sort(arr)
print("%s" % ("".join(ans)))
