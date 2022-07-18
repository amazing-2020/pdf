#include <stdio.h>
#include <string.h>
int binToI(char *);

int main(void)
{
  int length = sizeof(int) * 4 + 1;
  char str[length];

  printf("Enter a int type number in bin format: ");
  scanf("%s", str);
  printf("%s = %d\n", str, binToI(str));

  return 0;
}

int binToI(char * ps)
{
  int n = 0;
  int len = strlen(ps);
  int m = 1;

  printf("%d\n", len);
  for (int i = len - 1; i >= 0 ; i--, m *= 2)
  {
    int a = (ps[i] - '0') * m;
    if(i == 0 && len == sizeof(int) * 4) // ps is a positive integer by default
      n += -1 * a;
    else
      n += a;
  }

  return n;
}