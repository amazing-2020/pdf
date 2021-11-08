import random

nums = random.sample(range(1, 1000), 3)
order = None
if nums[0] > nums[1]:
    if nums[1] > nums[2]:
        order = [2, 1, 0]
    else:
        if nums[0] > nums[2]:
            order = [1, 2, 0]
        else:
            order = [1, 0, 2]
else:
    if nums[0] > nums[2]:
        order = [2, 0, 1]
    else:
        if nums[1] > nums[2]:
            order = [0, 2, 1]
        else:
            order = [0, 1, 2]
for i in order:
    print(nums[i], end=" ")
print()
