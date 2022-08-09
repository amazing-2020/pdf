#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "getinput.h"
#define LEN 40
int main(void)
{
  FILE *in, *out;
  int ch;
  char name[LEN];
  char file_src[LEN];
  int count = 0;

  printf("Please enter the file name you want to open: ");
  s_gets(file_src, LEN);
  if ((in = fopen(file_src, "r")) == NULL)
  {
    fprintf(stderr, "I couldn't open the file\"%s\"\n", file_src);
    exit(EXIT_FAILURE);
  }
  strncpy(name, file_src, LEN - 5);
  name[LEN-5] = '\0'; // -5为后缀名预留空间
  strcat(name, ".red");
  if ((out = fopen(name, "w")) == NULL)
  {
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  }
  while ((ch = getc(in)) != EOF)
    if (count++ % 3 == 0)
      putc(ch, out);
  if (fclose(in) != 0 || fclose(out) != 0)
    fprintf(stderr, "Error in closing files.\n");

  return 0;
}