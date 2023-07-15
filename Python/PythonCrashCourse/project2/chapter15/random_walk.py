from random import choice


class RandomWalk:
    def __init__(self, num_points=5000):
        self.num_points = num_points

        self.x_values = [0]
        self.y_values = [0]

    def fill_walk(self):
        while len(self.x_values) < self.num_points:
            # 15.5 reconstitution
            x_step = self._get_step()
            y_step = self._get_step()

            if x_step == 0 and y_step == 0:
                continue

            x = self.x_values[-1] + x_step
            y = self.y_values[-1] + y_step

            self.x_values.append(x)
            self.y_values.append(y)

    def _get_step(self):
        _choice = choice([1, -1])
        _distance = choice([0, 1, 2, 3, 4])
        step = _choice * _distance

        return step

