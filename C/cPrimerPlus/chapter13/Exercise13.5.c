#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256
#define END '\n'
int main(int argc, char *argv [])
{
  FILE *fp;
  char string[MAX_LEN];
  unsigned int ownTheCh = 0;

  //输入错误检测
  if (argc != 3)
  {
    fprintf(stderr, "Parameters not enough or too much.\n");
    exit(1);
  }
  if (argv[1][1] != '\0')
  {
    fprintf(stderr, "The first parameter should be a character.\n");
    exit(1);
  }
  if ((fp = fopen(argv[2], "r")) == NULL)
  {
    fprintf(stderr, "Can't find the file.\n");
    exit(1);
  }

  while (fgets(string, MAX_LEN, fp) != 0)
  {
    int i = 0;
    while (string[i] != END && string[i] != '\0')
    {
      if (string[i] == argv[1][0])
      {
        ownTheCh = 1;
        break;
      }
      i++;
    }
    if (ownTheCh)
    {
      ownTheCh = 0;
      printf("%s", string);
    }
  }

  return 0;
}