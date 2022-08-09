#include <stdio.h>

int getstatus(int, int);

int main(void)
{
  int n, m;

  printf("Enter an integer : ");
  scanf("%d", &n);
  printf("Which bit do you want to check : ");
  scanf("%d", &m);
  if (getstatus(n, m))
    printf("This bit is 1\n");
  else
    printf("This bit is 0\n");

  return 0;
}

int getstatus(int m, int n)
{
  if ((m >>= n) & 01)
    return 1;
  else
    return 0;
}