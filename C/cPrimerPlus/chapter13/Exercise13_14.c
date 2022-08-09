#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Numfile "Number13_12.txt"
#define DESTINATION "Result13_14.txt"
void de_glitching(char arr[20][31]);
int compare(char ch1, char ch2);

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
  de_glitching(array);
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

void de_glitching(char arr[20][31])
{
  int i = 0, j = 0;

  while (i < 20)
  {
    /*
     * Normal condition
     */
    if (i >= 1 && i <= 18 && j >= 1 && j <= 28)
    {
      if (compare(arr[i][j], arr[i][j-1]) && compare(arr[i][j], arr[i][j+1])
          && compare(arr[i][j], arr[i-1][j]) && compare(arr[i][j], arr[i+1][j]))
      {
        float avg = roundf((arr[i][j-1] + arr[i][j+1] + arr[i-1][j] + arr[i+1][j]) / 4);
        arr[i][j] = (int)avg;
      }
    }
    else
    {
      /*
       * The first line
       */
      if (i == 0)
      {
        if (j == 0)
        {
          /*
           * The top left
           */
          if (compare(arr[i][j], arr[i][j+1]) && compare(arr[i+1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j+1] + arr[i+1][j]) / 2);
            arr[i][j] = (int)avg;
          }
        } else if (j == 29) {
          /*
           * The top right
           */
          if (compare(arr[i][j], arr[i][j-1]) && compare(arr[i+1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j-1] + arr[i+1][j]) / 2);
            arr[i][j] = (int)avg;
          }
        } else {
          /*
           * The middle
           */
          if (compare(arr[i][j], arr[i][j+1]) && compare(arr[i+1][j], arr[i][j])
              && compare(arr[i][j], arr[i][j-1]))
          {
            float avg = roundf((arr[i][j-1] + arr[i][j+1] + arr[i+1][j]) / 3);
            arr[i][j] = (int)avg;
          }
        }
      }
      /*
       * The last line
       */
      else if (i == 19)
      {
        if (j == 0)
        {
          if (compare(arr[i][j], arr[i][j+1]) && compare(arr[i-1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j+1] + arr[i-1][j]) / 2);
            arr[i][j] = (int)avg;
          }
        } else if (j == 29) {
          if (compare(arr[i][j], arr[i][j-1]) && compare(arr[i-1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j-1] + arr[i-1][j]) / 2);
            arr[i][j] = (int)avg;
          }
        } else {
          if (compare(arr[i][j], arr[i][j-1]) && compare(arr[i-1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j-1] + arr[i-1][j]) / 2);
            arr[i][j] = (int)avg;
          }
        }
      }
      /*
       * Two sides
       */
      else {
        if (j == 0)
        {
          /*
           * left
           */
          if (compare(arr[i][j], arr[i][j+1]) && compare(arr[i-1][j], arr[i][j])
              && compare(arr[i+1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j+1] + arr[i-1][j] + arr[i+1][j]) / 3);
            arr[i][j] = (int)avg;
          }
        } else {
          /*
           * Right
           */
          if (compare(arr[i][j], arr[i][j-1]) && compare(arr[i-1][j], arr[i][j])
              && compare(arr[i+1][j], arr[i][j]))
          {
            float avg = roundf((arr[i][j-1] + arr[i-1][j] + arr[i+1][j]) / 3);
            arr[i][j] = (int)avg;
          }
        }
      }
    }

    j++;
    /*
     * read until the 29th character
     */
    if (j == 30)
    {
      i++;
      j = 0;
    }
  }
}

int compare(char ch1, char ch2)
{
  if (ch1 - ch2 >= 1 || ch2 - ch1 >= 1)
    return 1;
  else
    return 0;
}