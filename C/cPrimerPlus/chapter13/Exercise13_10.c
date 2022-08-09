#include <stdio.h>
#include <stdlib.h>
#define SLEN 32
void rmNewline(char filename[SLEN]);

int main(void)
{
  FILE *fp;
  char filename[SLEN], ch;
  long offset = 0L;
  int flag = 0;

  puts("Please enter a file name you want to open: ");
  fgets(filename, SLEN, stdin);
  rmNewline(filename);
  if ((fp = fopen(filename, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s.\n", filename);
    exit(EXIT_FAILURE);
  }
  printf("Please enter a destination num you want to show: ");
  while ((fscanf(stdin, "%ld", &offset) == 1) && offset >=0)
  {
    fseek(fp, offset, SEEK_SET);
    while ((ch = fgetc(fp)) && flag != 2)
    {
      if (ch == '\n')
        flag++;
      fputc(ch, stdout);
    }
    flag = 0;
    rewind(fp);
    printf("Please enter a destination num you want to show: ");
  }
  fclose(fp);

  return 0;
}

void rmNewline(char filename[SLEN])
{
  char *ptr = filename;

  while (*ptr != '\0')
  {
    ptr++;
    if (*ptr == '\n')
      *ptr = '\0';
  }
}