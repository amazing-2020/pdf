#include <stdio.h>
#include <limits.h>

char * itobs(unsigned int, char *);
unsigned int rotate_1(unsigned int, unsigned int);
int size = (sizeof(unsigned int) * CHAR_BIT) + 1;

int main(void)
{
  unsigned int num, num1, n;
  char pn[size], pn1[size];

  printf("Enter an number you want to change : ");
  scanf("%u", &num);
  itobs(num, pn);
  printf("How mant bit do you want to move : ");
  scanf("%u", &n);
  num1 = rotate_1(num, n);
  itobs(num1, pn1);
  printf("%10u : %s\n", num, pn);
  printf("%10u : %s\n", num1, pn1);

  return 0;
}

char * itobs(unsigned int n, char * ps)
{
  int len = size - 1;

  for (int i = len - 1; i >= 0; i--, n>>= 1)
    ps[i] = (n & 01) + '0';
  ps[len] = '\0';

  return ps;
}
unsigned int rotate_1(unsigned int num, unsigned int n)
{
  unsigned int temp = 0;

  for (int i = 0; i < n; ++i, num <<= 1)
    temp = (temp << 1) + ((num & INT_MIN) >> (size - 2));

  return temp + num;
}