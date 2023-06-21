#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 41
#define LEN 6
/*
 * get the latest serial number, check if the file is empty
 */
void getTheSerialNumber(FILE *fptr, char num[LEN]);
void changeSerialNum(char number[LEN]);
int main(void)
{
  FILE *fp;
  char words[MAX], Serial[LEN] = {'\0'}, ALine[MAX+LEN];//words max length 41byte, Serial max is 6byte, add them total is 46byte
  if ((fp = fopen("wordy.13_9", "a+")) == NULL)
  {
    fprintf(stdout, "Can't open \"wordy.13_9\" file.\n");
    exit(EXIT_FAILURE);
  }

  getTheSerialNumber(fp, Serial);
  puts("Enter words to add to the file; press the #");
  puts("key at the beginning of a line to terminate.");
  while ((fscanf(stdin, "%40s", words) == 1) && words[0] != '#') //按空格分割输入的字符串作为每一行输入
  {
    changeSerialNum(Serial);
    sprintf(ALine, "%s.%s", Serial, words);
    fprintf(fp, "%s\n", ALine);
  }

  puts("File contents:");
  rewind(fp);/* return to the start of the file*/
  while (fscanf(fp, "%s", words) == 1)
    puts(words);
  puts("Done!");
  if (fclose(fp) != 0)
    fprintf(stderr, "Error closing file.\n");

  return 0;
}

void getTheSerialNumber(FILE *fptr, char num[LEN])
{
  char ch;
  char line[MAX+LEN];
  long offset = -1L;
  /*
   * Move the position identifier one byte from the end of the file,
   * try to find a valid ASCII character at the end
   * If the offset is 0L, Anyway, the fgetc() will always return EOF.
   */
  fseek(fptr, offset, SEEK_END);
  /*
   * If the file has lots of '\n', it won't be removed!
   */
  if ((ch = fgetc(fptr)) == EOF && ch != '\n')
  {
    /*
     * 1. The file is actually empty, without any byte. fgetc() will return EOF
     * 2. The file's first line has just '\n', we assume the file is standard
     *    won't have a lot of data follow lots of break
     * In such conditions, the serial number will be set to "0"
     */
    num[0] = '0';
    num[1] = '\0';
  } else {
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
    if ((location = strchr(line, '.')) != NULL)
    {
      *location = '\0';
      strncpy(num, line, LEN);
    }
  }
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
