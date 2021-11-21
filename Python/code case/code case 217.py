tour = []
heights = []
height = 100.0
tim = 10

for i in range(1, tim+1):
    if i == 1:
        tour.append(height)
    else:
        tour.append(2*height)
    height /= 2
    heights.append(height)
print("Sum of the heights:{0}".format(sum(heights)))
print("The 10th height:{0}".format(heights[-1]))
