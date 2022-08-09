#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int roll_n_dice(int dice, int sides);
int rollem(int sides);

int main(void)
{
  int *result;
  int sets, dice, sides;

  printf("Enter the number of the sets; enter q to stop:");
  while (scanf("%d", &sets) == 1)
  {
    result = (int *)malloc(sets * sizeof (int));
    if (result == NULL)
    {
      printf("Malloc Error. \n");
      break;
    }
    printf("How many dices and how many sides? ");
    scanf("%d %d", &dice, &sides);

    srand((unsigned int)time(0));// 需要放在循环外部，不然输出的值是相同的
    for (int i = 0; i < sets; ++i)
      result[i] = roll_n_dice(dice, sides);

    for (int i = 0; i < sets; ++i)
    {
      printf("%d\t", result[i]);
      if ((i+1) % 8 == 0)
        puts("");
    }
    printf("\n");
    free(result);
    printf("Enter the number of the sets; enter q to stop:");
  }

  return 0;
}

int roll_n_dice(int dice, int sides)
{
  int d;
  int total = 0;

  if (sides < 2)
  {
    printf("Need at least 2 sides. \n");
    return -2;
  }
  if (dice < 1)
  {
    printf("Need at leas one die. \n");
    return -1;
  }
  for (d = 0; d < dice; ++d)
    total += rollem(sides);

  return total;
}

int rollem(int sides)
{
  int roll;

  roll = rand() % sides + 1;

  return roll;
}