#include <stdio.h>
#include <stdlib.h>
void showTheFile(FILE * sc);
int main(int argc, char * argv[])
{
  FILE *fp;

  if (argc == 1)
  {
    fprintf(stderr, "Please enter command like this: %s filename1 filename2 filename3...\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  else
  {
    for (int i = 1; i < argc; ++i)
    {
      if ((fp = fopen(argv[i], "r")) == NULL)
      {
        fprintf(stderr, "\tCan't open the file \"%s\".\n", argv[i]);
        continue;
      }
      showTheFile(fp);
      printf("\nNext: \n");
      system("sleep 1s");
    }
  }
  fclose(fp);

  return 0;
}

void showTheFile(FILE * sc)
{
  char string[256];

  while ((fgets(string, 256, sc)) != NULL)
    fputs(string, stdout);
}