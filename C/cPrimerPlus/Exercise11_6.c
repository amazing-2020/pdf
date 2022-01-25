#include "stdio.h"
#include "string.h"
#include "getinput.h"
#define STLEN 40
int is_within(char ch, char * str);
int main(void)
{
  char *str;
  char character;
  int search;

  while (1)
  {
    char flag;

    printf("Enter a string: ");
    s_gets(str, STLEN);
    printf("Please enter a character you want to search: ");
    scanf("%c", &character);
    printf("\\%c\\\n", character);
    search = is_within(character, str);
    printf("%d \n", search);
    printf("Do you want to end? ");

    while (getchar() == '\n')
      break;

    scanf("%c", &flag);
    if (flag == 'y' || flag == 'Y' || (flag == '\n' && printf("Exit \n")))
      break;
    else
    {
      printf("Next: ");

      while (getchar() == '\n')
        break;
    }
  }

  return 0;
}

int is_within(char ch, char * str)
{
  int length= strlen(str);

  for (int i = 0; i < length; ++i) {
    if (str[i] == ch)
    {
      return (i+1);
    }
  }
  return 0;
}