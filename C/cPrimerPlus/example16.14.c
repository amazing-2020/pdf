#include <stdio.h>
#include <math.h>

#define RAD_TO_DEG (180/(4 * atan(1)))

typedef struct polat_v {
  double magnitude;
  double angle;
}Polar_v;

typedef struct rect_v {
  double x;
  double y;
}Rect_v;

Polar_v rect_to_polar(Rect_v);

int main(void)
{
  Rect_v input;
  Polar_v result;

  printf("Enter x abd y coordinates; enter q to quit:");
  while (scanf("%lf %lf", &input.x, &input.y) == 2)
  {
    result = rect_to_polar(input);
    printf("magnitude = %0.2f, angle = %0.2f\n", result.magnitude,
           result.angle);
  }
  puts("Byes!");

  return 0;
}

Polar_v rect_to_polar(Rect_v rv)
{
  Polar_v pv;

  pv.magnitude = sqrt(rv.x * rv.x + rv.y * rv.y);
  if(pv.magnitude == 0)
    pv.angle = 0;
  else
    pv.angle = RAD_TO_DEG * atan2(rv.y, rv.x);
  return pv;
}
