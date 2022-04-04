#include <stdio.h>
#include <stdlib.h>
#define Numfile "Number13_12.txt"
#define DESTINATION "Result13_12.txt"
int main(void)
{
  FILE *fp, *destination;
  char array[20][31] = {0}, ch = 0;
  char temp[31];
  int i = 0, j = 0;

  if ((fp = fopen(Numfile, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", Numfile);
    exit(EXIT_FAILURE);
  }
  printf("Run\n");
  while ((ch = fgetc(fp)) != EOF && i < 20)
  {
    if (ch != ' ')
    {
      if (ch == '0')
        array[i][j] = ' ';
      else if (ch == '1')
        array[i][j] = '.';
      else if (ch == '2')
        array[i][j] = '\'';
      else if (ch == '3')
        array[i][j] = ':';
      else if (ch == '4')
        array[i][j] = '~';
      else if (ch == '5')
        array[i][j] = '*';
      else if (ch == '6')
        array[i][j] = '=';
      else if (ch == '8')
        array[i][j] = '%';
      else if (ch == '9')
        array[i][j] = '#';
      else
      {
        /*
         *If ch == '\n'
         */
        array[i][j] = '\0';
      }
      j++;
    }
    if (j == 31) // 30 characters and a '\n'
    {
      j = 0;
      i++;
    }
  }
  fclose(fp);
  array[19][30] = '\0';

  if ((destination = fopen(DESTINATION, "w")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", DESTINATION);
    exit(EXIT_FAILURE);
  }
  for (int k = 0; k < 20; ++k)
  {
    if (k == 19)
      sprintf(temp, "%s", array[k]);
    else
      sprintf(temp, "%30s\n", array[k]);//30 + 1 = 31
    fputs(temp, destination);
  }
  fclose(destination);

  return 0;
}