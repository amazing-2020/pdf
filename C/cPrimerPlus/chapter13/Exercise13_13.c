#include <stdio.h>
#include <stdlib.h>
#define Numfile "Number13_12.txt"
#define DESTINATION "Result13_13.txt"
#define ROW 20
#define LIST 31
int main(void)
{
  FILE *fp, *destination;
  char array[ROW][LIST] = {0}, ch = 0;
  char temp[LIST];
  int i = 0, j = 0;

  if ((fp = fopen(Numfile, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", Numfile);
    exit(EXIT_FAILURE);
  }
  while ((ch = fgetc(fp)) != EOF && i < ROW)
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
    if (j == LIST) // 30 characters and a '\n'
    {
      j = 0;
      i++;
    }
  }
  fclose(fp);
  array[ROW-1][LIST-1] = '\0';

  if ((destination = fopen(DESTINATION, "w")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", DESTINATION);
    exit(EXIT_FAILURE);
  }
  for (int k = 0; k < ROW; ++k)
  {
    if (k == ROW-1)
      sprintf(temp, "%s", array[k]);
    else
      sprintf(temp, "%30s\n", array[k]);//30 + 1 = 31
    fputs(temp, destination);
  }
  fclose(destination);

  return 0;
}