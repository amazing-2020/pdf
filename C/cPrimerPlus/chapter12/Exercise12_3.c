// pe12-3b.c
// Compile with pe12-3a.c
#include <stdio.h>
#include "pe12-3a.h"
int main(void)
{
  int mode;

  printf("Enter 0 for metric mode, 1 for US mode:");
  scanf("%d", &mode);
  while (mode >= 0)
  {
    set_mode(mode);
    float energyUsage = get_info(mode);
    show_info(energyUsage, mode);
    printf("Enter 0 for metric mode, 1 for US mode");
    printf(" (-1 to quit): ");
    scanf("%d", &mode);
  }
  printf("Done! \n");

  return 0;
}