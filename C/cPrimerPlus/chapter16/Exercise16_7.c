#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void show_array(const double ar[], int n);
double * new_d_array(int n, ...);

int main(void)
{
  double *p1;
  double *p2;

  p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
  p2 = new_d_array(4, 100.0, 20.00, 80.8, -1890.0);
  show_array(p1, 5);
  show_array(p2, 4);
  free(p1);
  free(p2);

  return 0;
}

void show_array(const double ar[], int n)
{
  for (int i = 0; i < n; ++i)
    printf("%lf ", ar[i]);
  putchar('\n');
}

double * new_d_array(int n, ...)
{
  va_list ap;
  double *ptd;

  ptd = (double *)malloc(sizeof(double) * n);
  va_start(ap, n);
  for (int i = 0; i < n; ++i)
    ptd[i] = va_arg(ap, double);
  va_end(ap);
  return ptd;
}