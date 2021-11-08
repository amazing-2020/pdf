import random

nums = random.sample(range(1000), 9)
length = len(nums)
for i in range(length):
    flag = True
    for j in range(length-1-i):
        if nums[j] > nums[j+1]:
            nums[j], nums[j+1] = nums[j+1], nums[j]
            flag = False
    if flag:
        break
print(nums)
