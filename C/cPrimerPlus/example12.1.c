#include "stdio.h"
int main()
{
  int x = 30;

  printf("X in outer blocker: %d at %p\n", x, &x);
  {
    int x = 77;
    printf("X in inner blocker: %d at %p\n", x, &x);
  }
  printf("X in outer blocker: %d at %p\n", x, &x);
  while (x++ < 33)
  {
    int x = 100;
    x++;
    printf("X in inner blocker: %d at %p\n", x, &x);
  }
  printf("X in outer blocker: %d at %p\n", x, &x);

  return 0;
}