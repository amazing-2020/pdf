#include <stdio.h>
#define HARMEAN(X, Y) 1/(((1/(X)) + (1/(Y))) / 2)

int main(void)
{
  double a, b;

  a = 465;
  b = 324;
  printf("%lf\n", HARMEAN(a, b));
}