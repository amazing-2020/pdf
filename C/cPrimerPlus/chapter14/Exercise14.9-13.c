#include <stdio.h>
#define LEN 10
/*
 * question 9
 */
typedef struct automobile {
  char brand[LEN];
  float horsepower;
  char LEVEL;
  float wheelbase;
  float year;
} car;
/*
 * question 10
 */

struct gas {
  float distance;
  float gals;
  float mpg;
};

void calculate(struct gas a)
{
  a.mpg = a.gals / a.distance;
}

void calculate_point(struct gas * a)
{
  a->mpg = a->gals / a->distance;
}
/*
 * question 11
 */
enum choices{yes, no, maybe};

/*
 * question 12
 */
char * (* fun_pt)(char * string, char ch);

/*
 * question 13
 */
typedef double (* d_fun_pt)(double a, double b);

double sum1(double a, double b)
{
  return a+b;
}
double sum2(double a, double b)
{
  return a+b;
}
double sum3(double a, double b)
{
  return a+b;
}
double sum4(double a, double b)
{
  return a+b;
}

d_fun_pt pointer[4] = {sum1, sum2, sum3, sum4};

int main(void)
{
  double result;
  result = pointer[1](4, 5);

  printf("%lf\n", result);
  return 0;
}