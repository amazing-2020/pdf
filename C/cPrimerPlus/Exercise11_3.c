#include <stdio.h>
#include <ctype.h>
#define SIZE 40
char * readWord(char * arr);

int main(void)
{
  char word[SIZE] = {0};

  printf("Enter word: ");
  readWord(word);
  printf("The word you input: ");
  for (int i = 0; i < sizeof(word); ++i)
    putchar(word[i]);
  return 0;
}

char * readWord(char * arr)
{
  int i = 0;

  while (i < SIZE)
  {
    arr[i] = getchar();

    if (isspace(arr[i]))
    {
      if (i > 0 && !isspace(arr[i-1]))
      {
        arr[i]='\0';
        break;
      }
      continue;
    }
    i++;
  }

  return arr;
}