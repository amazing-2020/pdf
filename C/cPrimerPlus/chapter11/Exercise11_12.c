#include "stdio.h"
#include "ctype.h"
#define SIZE 100
int main(void)
{
  char arr[SIZE];
  int i = 0, inword = 0;
  int words = 0, upper = 0, lower = 0, parameter = 0, number = 0;
  printf("%d \\", number);

  printf("Enter a lot of characters: ");
  while ((arr[i] = getchar()) != EOF && i < SIZE)
  {
    i++;
  }
  printf("%d \\", number);

  i = 0;

  while (i++ < SIZE)
  {
      if (!isspace(arr[i]) && !inword) //捕获非空字符，开始统计单词
      {
        words++;
        inword = 1; // 确定进入单词
      }
      else if (isspace(arr[i]) && inword) //捕获空白字符，结束统计
        inword = 0;
      else if (isupper(arr[i]))
        upper++;
      else if (islower(arr[i]))
        lower++;
      else if (ispunct(arr[i]))
        parameter++;
      else if (isdigit(arr[i]))
        number++;
      else{}
  }
  printf("%d %d %d %d %d\n", words, upper, lower, parameter, number);

  return 0;
}
