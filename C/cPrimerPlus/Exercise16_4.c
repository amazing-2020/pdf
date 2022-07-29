#include <stdio.h>
#include <time.h>

void running(double);

int main(void)
{
  clock_t t = clock();

  printf("CPU TIME: %lf\n", (double)t);
  double time_dec = ((double)(clock() - t)) / CLOCKS_PER_SEC;
  running(time_dec);

  return 0;
}

void running(double a)
{
  clock_t x = clock();
  double difference = 0;
  int i = 0;

  while (1)
  {
    i += 1;
    difference = ((double)(clock() - x)) / CLOCKS_PER_SEC;
    if (difference >= a)
      break;
  }
  printf("Running %d times.\n", i);
}