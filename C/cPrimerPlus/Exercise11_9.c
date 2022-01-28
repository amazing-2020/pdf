#include "stdio.h"
#include "getinput.h"
#define SIZE 80

char * reverse(char * string);
int main(void)
{
  char str[SIZE];
  char *st_reversed;

  while (1)
  {
    char flag;

    printf("Please enter string: ");
    s_gets(str, SIZE);
    st_reversed = reverse(str);
    printf("The reversed string: %s \n", st_reversed);
    printf("Do you want continue?");
    flag = getchar();
    if (flag == 'n' || flag == 'N' || flag == '\n' )
      break;
    else
      getchar();
  }


  return 0;
}

char * reverse(char * string)
{
  char str[SIZE];
  int i = 0;
  const char * header = string;

  while (1)
  {
    if (*string != '\0')
    {
      str[i] = *string;
      string++;
      i++;
    } else{
      break;
    }
  }
  //printf("%d %s %p %d\n", i, str, string, *string);

  for (int j = 0; j < i; ++j)
    //printf("%p %c\n", string, *string);
    string--;
  for (int j = i-1; j >=0; j--) {
    *string = str[j];
    //printf("%c %c %d %p\n", str[j], *string, j, string);
    string++;
  }
  while (string != header)
    string--;
  //printf("\\%c %p %p\n", *string, string, string-i);

  return string;
}
/*
 * Please enter string: 123456
  6 123456 0x7ffdfdf0f706 0
  0x7ffdfdf0f705 6
  0x7ffdfdf0f704 5
  0x7ffdfdf0f703 4
  0x7ffdfdf0f702 3
  0x7ffdfdf0f701 2
  0x7ffdfdf0f700 1
  6 6 5 0x7ffdfdf0f700
  5 5 4 0x7ffdfdf0f701
  4 4 3 0x7ffdfdf0f702
  3 3 2 0x7ffdfdf0f703
  2 2 1 0x7ffdfdf0f704
  1 1 0 0x7ffdfdf0f705
  \ 0x7ffdfdf0f706 0x7ffdfdf0f700
  The reversed string: 654321⏎
 * */