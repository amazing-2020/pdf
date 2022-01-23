#include <stdio.h>
#include <ctype.h>
char * readWord(char * arr, int num);

int main(void)
{
  int number=0;
  char *word;

  printf("The max character: ");
  scanf("%d", &number);
  printf("Enter word: ");
  readWord(word, number);
  printf("The word you input: ");
  for (int i = 0; i < sizeof(word); ++i)
    putchar(word[i]);
  return 0;
}

char * readWord(char * arr, int num)
{
  int i = 0;

  while (i < num)
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