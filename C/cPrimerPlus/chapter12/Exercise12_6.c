#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#define SIZE 10
int rand1(int num);

int main(void)
{
  int counts[SIZE] = {0}, counts2[SIZE] = {2};
  int result = 0;

  for (int i = 0; i < 10; ++i)
  {
    srand((unsigned int)time(0));
    for (int j = 0; j < 100; ++j)
    {
      result = rand() % 10 + 1;
      counts[result - 1] += 1;

      result = rand1(counts[i]) % 10 + 1;
      counts2[result - 1] += 1;
    }
    sleep(1);
  }

  for (int i = 0; i < 10; ++i)
    printf("%5d", counts[i]);
  printf("\n");
  for (int i = 0; i < 10; ++i)
    printf("%5d", counts2[i]);
  printf("\n");

  return 0;
}

int rand1(int num)
{
  unsigned long int next = num;
  next = next * 1103515245 + 12345;
  return (unsigned int) (next / 65536) % 32768;
}