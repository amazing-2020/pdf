#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct strings {
  char *longer;
  char *shorter;
  int theL;
  int theS;
};

char reverse(char );
void running(struct strings, char , char **);
char calculate(char , char , char );
int main(int argc, char * argv[])
{
  if (argc != 3)
  {
    fprintf(stderr, "wrong input, please enter %s parameter1 parameter2\n", argv[0]);
    exit(1);
  }

  int len1 = strlen(argv[1]), len2 = strlen(argv[2]);
  struct strings str;

  printf("~%s : ", argv[1]);
  for (int i = 0; i < len1; ++i)
    printf("%c", reverse(argv[1][i]));
  printf("\n~%s : ", argv[2]);
  for (int i = 0; i < len2; ++i)
    printf("%c", reverse(argv[2][i]));

  if (len1 >= len2)
  {
    str.theL = len1;
    str.theS = len2;
    str.longer = argv[1];
    str.shorter = argv[2];
  }
  else
  {
    str.theL = len2;
    str.theS = len1;
    str.longer = argv[2];
    str.shorter = argv[1];
  }
  running(str, '&', argv);
  running(str, '|', argv);
  running(str, '^', argv);

  return 0;
}

char reverse(char ch)
{
  char n;

  if (ch == '0')
    n = '1';
  if (ch == '1')
    n = '0';

  return n;
}

void running(struct strings str, char ch, char ** argv)
{
  int i;

  printf("\n%s %c %s :\n", argv[1], ch,argv[2]);
  for (i = 0; i < str.theL - str.theS; ++i)
    printf("%c", calculate(str.longer[i], '0', ch));
  for (int j = i; j < str.theL; ++j)
    printf("%c", calculate(str.longer[j], str.shorter[j-i], ch));
}

char calculate(char m, char n, char mask)
{
  char ret;

  switch (mask)
  {
  case '&':
    ret = ((m - '0') & (n - '0')) + '0';
    break;
  case '|':
    ret = ((m - '0') | (n - '0')) + '0';
    break;
  case '^':
    ret = ((m - '0') ^ (n - '0')) + '0';
    break;
  }
  return ret;
}