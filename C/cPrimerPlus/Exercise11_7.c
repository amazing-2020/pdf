#include "stdio.h"
#include "string.h"
#include "getinput.h"
#define STLEN 40
#define SIZE 20
char * mystrncpy(char * aim, const char * str, size_t n);
int main(void)
{
  char str1[STLEN] = "abcdefghijklmn";
  char str2[SIZE] = "\0";
  size_t num;

  while (1)
  {
    char flag;
    printf("Type a string > ");
    s_gets(str2, SIZE);
    printf("%s \n%s \n", str1, str2);
    printf("How many characters do you want to copy? ");
    scanf("%zd", &num);
    getchar();
    mystrncpy(str1, str2, num);
    printf("%s \n", str1);

    printf("Do you want to quit(Y or y) ? ");
    scanf("%c", &flag);
    getchar();
    if (flag == 'y' || flag == 'Y')
      break;
  }
  return 0;
}

char * mystrncpy(char * aim, const char * str, size_t n)
{
  for (int i = 0; i < n; ++i) {
    aim[i] = str[i];
  }
  return aim;
}