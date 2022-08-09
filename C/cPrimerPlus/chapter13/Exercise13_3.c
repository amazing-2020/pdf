#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SLEN 256
char * s_gets(char *st, int n);

int main(void)
{
  FILE *sc, *tg;
  char scNAME[SLEN], tgNAME[SLEN];
  char temp[1];

  printf("Please enter the file name you want to copy:\t");
  s_gets(scNAME, SLEN);
  if ((sc = fopen(scNAME, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s.\n", scNAME);
    exit(EXIT_FAILURE);
  }
  printf("Please enter the file name you want to copy to:\t");
  s_gets(tgNAME, SLEN);
  if ((tg = fopen(tgNAME, "w")) == NULL)
  {
    fprintf(stderr, "Can't create the file %s.\n", tgNAME);
    exit(EXIT_FAILURE);
  }

  while ((fread(temp, sizeof(char ),1,sc)) != 0)
  {
    temp[0] = toupper(temp[0]);
    if ((fwrite(temp, sizeof(char ), 1, tg)) != 1)
    {
      fprintf(stderr, "Can't write data to the file %s.\n", tgNAME);
      char command[SLEN];
      sprintf(command, "%s %s", "rm", tgNAME);
      system(command);
    }
  }
  fclose(tg);
  fclose(sc);

  return 0;
}

char * s_gets(char * st, int n)
{
  char * return_value;
  int i = 0;

  return_value = fgets(st, n, stdin);
  if (return_value)
  {
    while (st[i] != '\n' && st[i] != '\0')
      i++;
    if (st[i] == '\n')
      st[i] = '\0';
    else
      while (getchar() == '\n')
        continue;
  }

  return return_value;
}