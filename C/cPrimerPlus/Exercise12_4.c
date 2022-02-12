#include <stdio.h>
int count(int end);

int main(void)
{
  int n;
  for (int i = 100; i >= 0; i--) {
    n = count(i);
  }
  printf("%d \n", n);

  return 0;
}

int count(int end)
{
  static int n = 0;
  n++;
  printf("Running. \n");
  if (end == 0)
    return n;
  return 0;
}