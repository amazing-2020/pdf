#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "getinput.h"
#define SIZE 100
void getWords(char **wd, int num);

int main(void)
{
  char **words;
  int wordNum = 0;

  printf("How many words do you wish to enter? ");
  scanf("%d", &wordNum);
  words = (char **)malloc(wordNum * sizeof(char *));
  printf("Enter 5 words now: \n");
  while (getchar() != '\n') //清除换行符
    break;
  getWords(words, wordNum);
  free(words);

  return 0;
}

void getWords(char **wd, int num)
{
  char string[SIZE];
  int i = 0, counts = 0, start = 0, end = 0, is_words = 0;  //访问字符串，创建单词数组，表示单词的'开始'和'结束'， 是否处于单词中

  s_gets(string, SIZE);
  int stringLength = strlen(string);

  while (i <= stringLength)
  {
    int length = 0;
    if (isalpha(string[i]) && !is_words)
    {
      start = i;
      is_words = 1;
    }
    if (!isalpha(string[i]) && is_words)
    {
      end = i;
      is_words = 0;
      length = end - start;
    }
    i++;

    if (counts >= num)//防止地址越界
      break;
    if (length != 0)
    {
      wd[counts] = (char *)malloc(length * sizeof(char)+1);
      for (int j = 0; j < length; ++j, start++)
        wd[counts][j] = string[start];
      wd[counts][length] = '\0';//为单词末尾添加空白字符
      counts++;
    }
  }

  printf("Here are your words: \n");
  for (int j = 0; j < counts; ++j)
  {
    printf("%s\n", wd[j]);
    free(wd[j]);
  }
}