#include <stdio.h>
#include <math.h>
#define SIZE 100

void transform(double * source, double * target, int size, double (*pfun)(double ));
double funcA(double );
double funcB(double );
void show(double *, double *, int);
int main(void)
{
  double src[SIZE] = {0}, dst[SIZE] = {0};

  for (int i = 0; i < SIZE; ++i)
    src[i] = i;
  transform(src, dst, SIZE, sin);
  show(src, dst, SIZE);
  transform(src, dst, SIZE, cos);
  show(src, dst, SIZE);
  transform(src, dst, SIZE, funcA);
  show(src, dst, SIZE);
  transform(src, dst, SIZE, funcB);
  show(src, dst, SIZE);

  return 0;
}


void transform(double * source, double * target, int size, double (*pfun)(double ))
{
  for (int i = 0; i < size; ++i)
    target[i] = (*pfun)(source[i]);
}

double funcA(double a)
{
  return a*2;
}

double funcB(double a)
{
  return a * a;
}
void show(double * a, double * b, int n)
{
  for (int i = 0; i < n/10; ++i) {
    for (int j = i * 10; j < 10 * (i+1); ++j) {
      printf("%.3lf ", a[j]);
    }
    printf("\n");
    for (int j = i * 10; j < 10 * (i + 1); ++j) {
      printf("%.3lf ", b[j]);
    }
    puts("");
  }
  printf("End\n");
}