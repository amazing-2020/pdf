#include "stdio.h"
int units = 0;
void critics(void);
int main(void)
{
  extern int units;

  printf("How many pounds to a frinkin of butter? \n");
  scanf("%d", &units);
  while (units != 56)
    critics();
  printf("You must have looked it up! \n");

  return 0;
}

void critics(void)
{
  printf("No luck, my friend. Try again. \n");
  scanf("%d", &units);
}