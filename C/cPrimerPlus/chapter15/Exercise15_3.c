#include <stdio.h>
#include <limits.h>
int count(int);

int main(void)
{
  int n, m;
  
  printf("Enter an integer: ");
  scanf("%d", &n);
  m = count(n);
  printf("%d contains %d '1'.\n", INT_MIN, m);

  return 0;
}

int count(int n)
{
  int num = 0;

  for (int i = sizeof(int) * CHAR_BIT; i > 0; i--, n >>= 1)
    if ((01 & n))
      num += 1;

  return num;
}