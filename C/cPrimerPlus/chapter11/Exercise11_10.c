#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "getinput.h"
#define MAX_SIZE 100
#define MAX_NUM 30
char * remove_blank(char arr[MAX_SIZE]);
int is_blank_line(char arr[MAX_SIZE]);

int main(void)
{
  char strings[MAX_NUM][MAX_SIZE];
  int is_space = 0, i=0;

  while (i != 5)
  {
    char (*header)[MAX_SIZE] = &strings[i];

    printf("Please enter some string: ");
    s_gets(*header, MAX_SIZE);
    printf("You entered: %s \\ %p \n", *header, header);
    is_space = is_blank_line(*header);
    if(is_space)  break;
    remove_blank(*header);
    i++;
  }
  for (int j = 0; j < i; ++j)
    printf("%s\n", strings[j]);

  return 0;
}

char * remove_blank(char * arr)
{
  int length = strlen(arr), i = 0, k = 0;
  int count[MAX_SIZE] = {0}; //记录空格字符
  char result[MAX_SIZE]; //非空字符的拷贝

  do {
    if (isspace(arr[i]))
      count[i] = 1;
    i++;
  } while (i < length);

  for (int j = 0; j < length; ++j) {
    if (!count[j])
    {
      result[k] = arr[j];
      k++;
    }
  }
  for (int j = 0; j < k; ++j) {
    arr[j] = result[j];
  }
  arr[k] = '\0';
  return arr;
}

int is_blank_line(char * arr)
{
  int length = strlen(arr), i=0, value;

  while (*arr != '\0')
  {
    if (isspace(*arr))
      i++;
    arr++;
  }
  if (i == length)
    value = 1;
  else
    value = 0;
  return value;
}