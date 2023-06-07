#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

void showobject(Item item);
char * s_gets(char * st, int n);

int main()
{
  Stack data;
  Item temp;

  InitializeStack(&data);
  if (StackIsFull(&data))
  {
    fprintf(stderr, "No memory is available! Bye!\n");
    exit(1);
  }

  printf("Enter the object brand: ");
  while (s_gets(temp.brand, NLEN) != NULL && temp.brand[0] != '\0')
  {
    printf("Enter the object cost: ");
    scanf("%lf", &temp.cost);
    while (getchar() != '\n')
      continue;
    if (EnStack(temp, &data) == false)
    {
      fprintf(stderr, "Error allocating memory!");
      break;
    }
    if (StackIsFull(&data))
    {
      puts("The stack is now full.");
      break;
    }
    puts("Enter next object brand, (Empty line to quit):");
  }
  if (StackIsEmpty(&data))
    printf("No data entered. ");
  else
  {
    printf("Here is the object list:\n");
    Traverse(&data, showobject);
  }
  printf("You entered %d objects.\n", StackItemCount(&data));

  EmptyTheStack(&data);
  printf("Bye!\n");

  return 0;
}

void showobject(Item item)
{
  printf("This object's brand is %s, it cost %lf dollars per day.\n",item.brand, item.cost);
}

char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets(st, n,stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
}
