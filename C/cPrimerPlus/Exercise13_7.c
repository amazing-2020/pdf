#include <stdio.h>
#include <stdlib.h>
#define SLEN 256
#define BUFFSIZE 512
void rmNewline(char * string);

int main(int argc, char *argv [])
{
  FILE *file1, *file2;
  char *fileName1, *fileName2;
  char string1[BUFFSIZE], string2[BUFFSIZE];
  char *ptr1, *ptr2;

  if (argc > 1)
  {
    if (argc > 2) // need three parameters
    {
      if (argc > 3)
      {
        fprintf(stderr, "Too much parameter:\n");
        exit(EXIT_FAILURE);
      } else {
        fileName1 = argv[1];
        fileName2 = argv[2];
      }
    } else {
      fileName1 = argv[1];
      fprintf(stderr, "There is just one file's name, please enter the another one: ");
      fileName2 = (char *)malloc(SLEN * sizeof(char));
      fgets(fileName2, SLEN, stdin);
      rmNewline(fileName2);
    }
  }
  else
  {
    if ((fileName1 = (char *)malloc((SLEN) * sizeof(char))) == NULL)
    {
      fprintf(stderr, "Can't malloc enough memory for the fileName1. \n");
      exit(EXIT_FAILURE);
    }
    if ((fileName2 = (char *)malloc((SLEN) * sizeof(char))) == NULL)
    {
      fprintf(stderr, "Can't malloc enough memory for the fileName2. \n");
      exit(EXIT_FAILURE);
    }
    printf("Please enter two file name: \n");
    printf("First: ");
    fgets(fileName1, SLEN, stdin);
    rmNewline(fileName1);
    printf("Second: ");
    fgets(fileName2, SLEN, stdin);
    rmNewline(fileName2);
  }
  printf("%s %s ", fileName1, fileName2);

  if ((file1 = fopen(fileName1, "r")) == NULL)
  {
    fprintf(stderr, "Can't create the file %s.\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  if ((file2 = fopen(fileName2, "r")) == NULL)
  {
    fprintf(stderr, "Can't create the file %s.\n", argv[2]);
    exit(EXIT_FAILURE);
  }
  while (1)
  {
    if ((ptr1 = fgets(string1, BUFFSIZE, file1)) != NULL )
      fputs(string1, stdout);
    if ((ptr2 = fgets(string2, BUFFSIZE, file2)) != NULL )
      fputs(string2, stdout);
    if (!(ptr1 || ptr2))
      break;
  }
  if (argc <= 2)
  {
    free(fileName2);
    if (argc == 1)
      free(fileName1);
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