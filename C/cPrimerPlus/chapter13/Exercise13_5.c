#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
void append(FILE *source, FILE *dest);

/*
 * argc是参数数量，argv作为二维数组从0开始统计
 */
int main(int argc, char *argv [])
{
  FILE *fa, *fs;//name of which to write, name of source
  int i = 2, count = 0;
  int ch;

  if ((fa = fopen(argv[1], "a+")) == NULL)
  {
    fprintf(stderr, "Can't create the file %s.\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  if (argc <= 2)
  {
    fprintf(stderr, "The parameter is not enough.\n");
    exit(EXIT_FAILURE);
  }
  if (setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
  {
    fputs("Can't create output buffer\n", stderr);
    exit(EXIT_FAILURE);
  }

  while (i < argc)
  {
    printf("%d %d %s\n", i, argc, argv[i]);
    if (strcmp(argv[1], argv[i]) == 0)
      fputs("Can't append file to itself\n", stderr);
    else if ((fs = fopen(argv[i], "r")) == NULL)
      fprintf(stderr, "Can't open %s\n", argv[i]);
    else
    {
      if (setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
      {
        fputs("Can't create input buffer\n", stderr);
        continue;
      }
      append(fs, fa);

      if (ferror(fs) != 0)
        fprintf(stderr, "Error in reading file %s.\n", argv[i]);
      if (ferror(fa) != 0)
        fprintf(stderr, "Error in writing file %s.\n", argv[1]);
      fclose(fs);
      count++;
      printf("File %s appended.\n", argv[i]);
    }
    i++;
  }

  printf("Done appending. %d files appended.\n", count);
  rewind(fa);
  printf("%s contents:\n", argv[1]);
  while ((ch = getc(fa)) != EOF)
    putchar(ch);
  puts("Done displaying.");
  fclose(fa);

  return 0;
}

void append(FILE *source, FILE *dest)
{
  size_t bytes;
  static char temp[BUFSIZE];//只分配一次

  while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)//获得要复制的数据大小。并将其复制到temp
    fwrite(temp, sizeof(char), bytes, dest);
}