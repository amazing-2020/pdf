#include "stdio.h"
#include "getinput.h"
#define SIZE 80
char * string_in(char * search_target, char * emotional_string);
void remove_newline();

int main(void)
{
  char s1[SIZE], s2[SIZE], *result;

  while (1)
  {
    char flag;

    printf("Please enter a string: ");
    s_gets(s1, SIZE);
    printf("Please enter a shorter string: ");
    s_gets(s2, SIZE);
    result = string_in(s2, s1);
    printf("%s \n", result);

    printf("Do you want to exit: ");
    scanf("%c", &flag);
    if (flag == 'y' || flag == 'Y' || flag == '\n')
      break;
    else
      remove_newline();
  }


}

char * string_in(char * search_target, char * emotional_string)
{
  char *location = NULL;
  int header = 0;

  while (*emotional_string != '\0')
  {
    if (*search_target != '\0')
    {
      if (*search_target == *emotional_string)
      {
        search_target++; //只有找到了被查找字符串中存在该字符串的第一个字符才移动指针
        if (!header)
        {
          printf("OK \n");
          location = emotional_string;
          header = 1;
        }
      }
      else
      {
        if (header)
        {
          location = NULL;
          break;
        }
      }
    } else {
      break;
    }
    emotional_string++;
  }

  return location;
}

void remove_newline()
{
  while (getchar() != '\n')
    break;
}