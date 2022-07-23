#include <stdio.h>
#define JUST_CHECKING
#define LIMIT 4

int main(void)
{
  int i;
  int total = 0;

  for (i = 0; i <= LIMIT ; ++i)
  {
    total += 2 * i *i + 11;
#ifdef JUST_CHECKING
    printf("i=%d, running total = %d\n", i, total);
#endif
  }
  printf("Granfd total = %d\n", total);

  return 0;
}