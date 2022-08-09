#include "stdio.h"
int main(int argc, char * argv[])
{
  int i = 1;
  for (int j = argc - i; j > 0 ; j--)
  {
    printf("%s ", argv[j]);
  }
  printf("\n");

  return 0;
}