#include <stdio.h>
#include "string.h"
#include "getinput.h"
#define STLEN 100
char * str_search_chr(char * str, char ch);
int main(void)
{
  char *str, *search;
  char character;

  while (1)
  {
    char flag;

    printf("Enter a string: ");
    s_gets(str, STLEN);
    printf("Please enter a character you want to search: ");
    scanf("%c", &character);
    printf("\\%c\\\n", character);
    search= str_search_chr(str, character);
    printf("%s \n", search);
    printf("Do you want to end? ");

    while (getchar() == '\n')
      break;

    scanf("%c", &flag);
    if (flag == 'y' || flag == 'Y')
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

char * str_search_chr(char * str, char ch)
{
  int length= strlen(str);
  char * result;

  for (int i = 0; i < length; ++i) {
    if (str[i] == ch)
    {
      result = &str[i];
      return result;
    }
  }
  return NULL;
}