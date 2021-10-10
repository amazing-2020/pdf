from collections import deque
queue = deque(["Eric", "John", "Michael"])
queue.append("Terry")
queue.append("Graham")
print(queue.popleft())
print(queue.popleft())
print(queue)

var = [2, 4, 6]
print([3*x for x in var])
vac = [2, 4, 6]
print([[x, x**2]] for x in vac)

freshfruit = [' banana', ' loganberry', 'passion fruit']
print([weapon.strip() for weapon in freshfruit])
