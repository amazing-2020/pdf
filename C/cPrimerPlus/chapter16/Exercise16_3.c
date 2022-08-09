#include <stdio.h>
#include <math.h>
#define ANGLE_TO_RAD (180 /(4 * atan(1))) //atan(1)等于角度为45度的弧度值，该式子可得到每弧度对应的角度值
struct polarcoord {
  double vector;
  double angle;
};

struct rectcoord {
  double x;
  double y;
};

struct rectcoord polar_to_rec(struct polarcoord);

int main(void)
{
  struct polarcoord point;
  struct rectcoord point1;

  printf("Enter the point vector( >= 0) and the angle(0-360): ");
  scanf("%lf %lf", &point.vector, &point.angle);
  point1 = polar_to_rec(point);
  printf("The X: %lf, the Y: %lf\n", point1.x, point1.y);

  return 0;
}

struct rectcoord polar_to_rec(struct polarcoord m)
{
  struct rectcoord n;

  n.x = m.vector * cos(m.angle / ANGLE_TO_RAD);
  n.y = m.vector * sin(m.angle / ANGLE_TO_RAD);

  return n;
}