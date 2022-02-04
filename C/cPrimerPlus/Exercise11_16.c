#include "stdio.h"
#include "ctype.h"
#include "getinput.h"
#define SIZE 100
int main(int argc, char *argv[])
{
  char str[SIZE];

  printf("Enter a lot of characters: ");
  printf("%p \n", str);
  s_gets(str, SIZE);
  if (argv[1] != NULL && argv[1][0] == '-')
  {
    if (argv[1][1] == 'p')
      printf("%s", str);
    else if (argv[1][1] == 'u')
      for (int i = 0; str[i] != '\0'; ++i)
        printf("%c", toupper(str[i]));
    else if (argv[1][1] == 'l')
      for (int i = 0; str[i] != '\0' ; ++i)
        printf("%c", tolower(str[i]));
    else{}
  } else {
    printf("%s", str);
  }
  printf("\n");

  return 0;
}