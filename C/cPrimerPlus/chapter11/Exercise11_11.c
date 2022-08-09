#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "getinput.h"
#define NUM 10
#define MAX_SIZE 100
#define STARS "***********"
void printStrings(char arr[][MAX_SIZE], int num);
void printInASCII(char *arr [], int num);
void printByLength(char *arr[NUM], int num);
void printByFirstWord(char arr[][MAX_SIZE], int num);
int menu(void);

int main(void)
{
  char strings[NUM][MAX_SIZE];
  char *ptstr[NUM];  // pointer array
  int flag = 1, count = 0;

  printf("Enter 10 strings: ");
  while(count < NUM && s_gets(strings[count], MAX_SIZE) != NULL && strings[count][0] != '\0')
  {
    ptstr[count] = strings[count];
    count++;
    printf("%sNEXT %d %s\n", STARS, count+1, STARS);
  }

  while (flag)
  {
    switch (menu())
    {
    case 1:
      printStrings(strings, count);
      break;
    case 2:
      printInASCII(ptstr, count);//没有更改strings二维数组的值
      break;
    case 3:
      printByLength(ptstr, count);
      break;
    case 4:
      printByFirstWord(strings, count);
      break;
    case 5:
      printf("%sEXIT%s \n", STARS, STARS);
      flag = 0;
      break;
    }
  }

  return 0;
}

int menu(void)
{
  int code, status;

  printf("1.print the original list of strings       2.print the strings in ASCII collating sequence \n");
  printf("3.print the strings in increasing sequence 4.print the strings in order of the first word  \n");
  printf("\t\t\t\t\t     length in the string. \n");
  printf("5.quit \n");
  printf("Please choose a option(1-5): ");
  while ((status = scanf("%d", &code)) != 1 || code < 1 || code > 5)
  {
    if (status != 1)
      scanf("%*s");
    printf("Please enter a number between 1 and 5! \n");
  }

  return code;
}

void printStrings(char arr[][MAX_SIZE], int num)
{
  for (int i = 0; i < num; ++i)
    printf("%2d --- %s \n", i+1, arr[i]);
}

void printInASCII(char *arr [], int num)
{
  char *temp;
  int top, seek;

  for (top = 0; top < num-1; top++)
    for (seek = top+1; seek < num; seek++)
      if (strcmp(arr[top], arr[seek]) > 0)
      {
        temp = arr[top];
        arr[top] = arr[seek];
        arr[seek] = temp;
      }
  for (int i = 0; i < num; ++i)
    printf("%s \n", arr[i]);
}

void printByLength(char *arr[MAX_SIZE], int num)
{
  int length[num], length_copy[num];
  int k = 0, m = 0;

  for (int i = 0; i < num; ++i)
  {
    length[i] = strlen(arr[i]);
    length_copy[i] = length[i];
  }

  //冒泡排序，length长度数组
  for (int i = 0; i < num - 1; ++i)
  {
    for (int j = 0; j < num - 1 - i; ++j)
    {
      int temp;
      if (length[j] > length[j+1])
      {
        temp = length[j+1];
        length[j+1] = length[j];
        length[j] = temp;
      }
    }
  }

  while (k < num)
  {
    if (length[k] == length_copy[m])
    {
      printf("%s\n", arr[m]);
      k++;
    }
    m++;
    if (m >= num)
      m = 0;
  }
}

void printByFirstWord(char arr[][MAX_SIZE], int num)
{
  int words[NUM] = {0}, words_copy[NUM] = {0};

  for (int i = 0; i < num; ++i)
  {
    for (int j = 0; j < MAX_SIZE; ++j)
    {
      if (isspace(arr[i][j]) || arr[i][j] == '\0')
        break;
      words[i] += 1;
      words_copy[i] += 1;
    }
  }
 
  for (int start = 0; start < num-1; start++)
  {
    int min = start;
    for (int end = start+1; end < num; ++end)
    {
      if (words_copy[end] < words_copy[min])
        min = end;
    }
    int temp = words_copy[min];
    words_copy[min] = words_copy[start];
    words_copy[start] = temp;
  }

  int k=0 , m=0;// 参照数组下标，输出对象与原始数组下标
  while (k < num)
  {
    if (words_copy[k] == words[m])
    {
      printf("%s %d %d\n", arr[m], k, m);
      k++;
    }
    m++;
    if (m >= num)
      m = 0;
  }
}