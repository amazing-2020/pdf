#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
#define LEN 6
/*
 * get the latest serial number, check if the file is empty
 */
int getTheSerialNumber(FILE *fptr, char num[LEN]);
void changeSerialNum(char number[LEN]);
int main(void)
{
  FILE *fp;
  char words[MAX], Serial[LEN], ALine[MAX+LEN];//words max length 41byte, Serial max is 99999 5byte, add them total is 46byte
  int isEmpty = 0;
  if ((fp = fopen("wordy.13_9", "a+")) == NULL)
  {
    fprintf(stdout, "Can't open \"wordy.13_9\" file.\n");
    exit(EXIT_FAILURE);
  }

  isEmpty = getTheSerialNumber(fp, Serial);
  printf("%s\n", Serial);
  puts("Enter words to add to the file; press the #");
  puts("key at the beginning of a line to terminate.");
  while ((fscanf(stdin, "%40s", words) == 1) && words[0] != '#') //按空格分割输入的字符串作为每一行输入
  {
    if (isEmpty)
      isEmpty = 0;
    else
      changeSerialNum(Serial);
    sprintf(ALine, "%s.%s", Serial, words);
    fprintf(fp, "%s\n", ALine);
  }

  puts("File contents:");
  rewind(fp);/*返回到文件开始处*/
  while (fscanf(fp, "%s", words) == 1)
    puts(words);
  puts("Done!");
  if (fclose(fp) != 0)
    fprintf(stderr, "Error closing file.\n");

  return 0;
}

int getTheSerialNumber(FILE *fptr, char num[LEN])
{
  char ch;
  char line[MAX+LEN];
  long offset = -1L;
  int isEmpty = 0;
  /*
   * Move the position identifier one byte from the end of the file,
   * try to find a valid ASCII character at the end
   */
  printf("start\n");
  fseek(fptr, offset, SEEK_END);
  printf("Run0\n");
  if ((ch = fgetc(fptr)) == EOF)
  {
    /*
     * Condition 1, the file is empty.
     * If the offset is 0L, Anyway, the fgetc() will always return EOF.
     * It aims at finding out whether this file is empty.
     * If it's empty, fgetc() will return EOF,
     * so the first serial number is '1'.
     */
    printf("Run1\n");
    num[0] = '1';
    num[1] = '\0';
    isEmpty = 1;
  } else {
    printf("Run2\n");
    char *location;//The location of character '.'
    /*
     * Move the position identifier to the next position
   ``*/
    offset -= 1;
    fseek(fptr, offset, SEEK_END);
    /*
     * Read each character forward in turn
     */
    while ((ch = fgetc(fptr)) != '\n')
    {
      offset -= 1;
      if (fseek(fptr, offset, SEEK_END) < 0)
        break;
    }

    /*
     * Move the position identifier back to an effective position.
     */
    offset += 1;

    fseek(fptr, offset, SEEK_END);
    fgets(line, MAX+LEN, fptr);
    location = strchr(line, '.');
    *location = '\0';
    strncpy(num, line, LEN);
  }
  return isEmpty;
}

void changeSerialNum(char number[LEN])
{
  int serialNumber = atoi(number), numCopy;
  int length = 0;

  serialNumber++;
  numCopy = serialNumber;
  while (numCopy)
  {
    numCopy /= 10;
    length++;
  }
  for (int i = length-1; i >= 0; i--)
  {
    number[i] = serialNumber % 10 + 48;
    serialNumber /= 10;
  }
}

/*
 * if the file just has a '\n', the program can't process it.
 */