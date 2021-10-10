vex1 = [2, 4, 6]
vex2 = [4, 3, -9]
print([x*y for x in vex1 for y in vex2])
print([x+y for x in vex1 for y in vex2])
print([vex1[i]*vex2[i] for i in range(len(vex2))])
print([str(round(355/113, i)) for i in range(6)])
