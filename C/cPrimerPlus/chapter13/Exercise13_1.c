#include <stdio.h>
#include <stdlib.h>
#define SIZE 256
int main(void)
{
  int ch;
  int i = 0;
  FILE *fp;
  char file_name[SIZE];
  unsigned long count = 0;

  printf("Please enter the file you want to open: \n");
  fgets(file_name, SIZE, stdin);
  while (file_name[i] != '\0')
  {
    if (file_name[i] == '\n')
      file_name[i] = '\0';
    i++;
  }

  if ((fp = fopen(file_name, "r")) == NULL)
  {
    printf("Can't open %s\n", file_name);
    exit(EXIT_FAILURE);
  }
  while ((ch = getc(fp)) != EOF)
  {
    putc(ch, stdout);
    count++;
  }
  fclose(fp);
  printf("\nFile %s has %lu characters\n", file_name, count);

  return 0;
}