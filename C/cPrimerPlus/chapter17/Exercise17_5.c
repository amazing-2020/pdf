#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void show_str_reverse(const Item i);

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

  printf("Enter the string: ");
  while ((temp.ch = getchar()) != '\n')
  {
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
  }
  if (StackIsEmpty(&data))
    printf("No data entered. ");
  else
  {
    printf("Here is the reversed string:\n");
    Traverse(&data, show_str_reverse);
  }
  printf("\nYou entered %d characters.\n", StackItemCount(&data));

  EmptyTheStack(&data);
  printf("Bye!\n");

  return 0;
}

void show_str_reverse(const Item i)
{
  printf("%c", i.ch);
}
