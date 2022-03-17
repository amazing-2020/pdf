#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 256

int main(int argc, char *argv [])
{
  FILE *fp, *copiedFile;
  char fileName[SLEN], temp[SLEN];

  if (argc != 2)
  {
    fprintf(stderr, "The format is %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  if ((fp = fopen(argv[1], "rb")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s.\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  strcpy(fileName, argv[1]);
  strcat(fileName, ".copy");
  if ((copiedFile = fopen(fileName, "wb")) == NULL)
  {
    fprintf(stderr, "Can't create the file.\n");
    exit(EXIT_FAILURE);
  }
  while ((fread(temp, sizeof(char ),1,fp)) != 0)
    fwrite(temp, sizeof(char ), 1, copiedFile);

  /*The other solution.
   *while ((fgets(temp, SLEN, fp)) != 0)
   *  fputs(temp, copiedFile);
   */
  fclose(copiedFile);
  fclose(fp);

  return 0;
}