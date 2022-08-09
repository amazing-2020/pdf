#include "stdio.h"
void critics(int * num);
int main(void)
{
  int units = 0;

  printf("How many pounds to a firkin of butter? \n");
  scanf("%d", &units);
  while (units != 56)
    critics(&units);
  printf("You must have looked it up! \n");

  return 0;
}

void critics(int * num)
{
  printf("No luck, my friend. Try again. \n");
  scanf("%d", num);
}