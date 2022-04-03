#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 256

int main(int argc, char * argv[])
{
  FILE *fp;
  char string[LEN];

  if (argc < 3)
  {
    fprintf(stderr, "The parameter is not enough.\n");
    printf("The standard syntax like this %s string filename.\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  if ((fp = fopen(argv[2], "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s.\b", argv[2]);
    exit(EXIT_FAILURE);
  }
  while ((fgets(string, LEN, fp)) != NULL)
    if (strstr( string, argv[1]) != NULL)
      fputs(string, stdout);
  fclose(fp);

  return 0;
}