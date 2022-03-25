#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 256
int count(FILE * fptr, char character);
void rmNewline(char * string);

int main(int argc, char *argv [])
{
  FILE *fp;
  char ch;
  int countNum = 0;

  if (argc == 1)
  {
    fprintf(stderr, "Need a character as a parameter.\n");
    exit(EXIT_FAILURE);
  }
  if (argc >= 2)
  {
    if (argv[1][1] != '\0')
    {
      fprintf(stderr, "The first character should be a character.");
      exit(EXIT_FAILURE);
    }
    ch = argv[1][0];
    if (argc == 2)
    {
      char filename[SLEN];

      printf("Please enter the file you want to open: ");
      while ((fgets(filename, SLEN, stdin)) != NULL &&
             filename[0] >= 32) // test the control character < 32
      {
        rmNewline(filename);
        if ((fp = fopen(filename, "r")) != NULL) {
          countNum = count(fp, ch);
          printf("There is %d $%c$ in the file %s.\n", countNum, ch, filename);
          fclose(fp);
        } else {
          fprintf(stderr, "Can't open the file %s.\n", filename);
        }
        printf("Enter the next file:");
      }
      printf("End.\n");
    } else {
      int i = 2;

      while (i < argc)
      {
        if ((fp = fopen(argv[i], "r")) != NULL)
        {
          countNum = count(fp, ch);
          printf("There %d $%c$ in the file %s.\n", countNum, ch, argv[i]);
          fclose(fp);
        }
        else
          fprintf(stderr, "Can't open the file %s.\n", argv[i]);
        printf("The next file: ");
        i++;
      }
    }
  }

  return 0;
}

void rmNewline(char * string)
{
  while (*string != '\0')
  {
    if (*string == '\n')
      *string = '\0';
    string++;
  }
}

int count(FILE * fptr, char character)
{
  char string[SLEN];
  int num = 0;

  while (fgets(string, SLEN, fptr) != NULL)
  {
    int i = 0, len = strlen(string);
    while (string[i] != '\n' && i < len)
    {
      if (string[i] == character)
        num++;
      i++;
    }
  }

  return num;
}