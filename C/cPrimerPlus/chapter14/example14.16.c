#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LEN 81
char * s_gets(char * st, int n);
char showMenu(void);
void eatLine(void);
void show(void (* fp)(char *), char * str);
void ToUpper(char *);
void ToLower(char *);
void Transpose(char *);
void Dummy(char *);

int main(void)
{
  char line[LEN];
  char copy[LEN];
  char choice;

  /*
   * Pointer to a function
   * have char * argument and
   * no return value.
   */
  void (* pfun)(char *);

  printf("Enter a string(Empty line to quit):\n");
  while (s_gets(line, LEN) != NULL && line[0] != '\0')
  {
    while ((choice = showMenu()) != 'n')
    {
      switch (choice)
      {
        case 'u': pfun = ToUpper;
          break;
        case 'l': pfun = ToLower;
          break;
        case 't': pfun = Transpose;
          break;
        case '0': pfun = Dummy;
          break;
        }
        strcpy(copy, line);
        show(pfun, copy);
    }
    puts("Enter a string(Empty line to quit):");
  }
  puts("Bye!");

  return 0;
}

char showMenu(void)
{
    char ans;
    puts("Enter menu choice: ");
    puts("u)Uppercase:         l):Lowercase:");
    puts("t):Transpose case:   o):Original case:");
    puts("n):Next string");
    ans = getchar();
    ans = tolower(ans);
    eatLine();
    while (strchr("ulton", ans) == NULL)
    {
      puts("Please enter u, l, t, o or n.");
      ans = tolower(getchar());
      eatLine();
    }

    return ans;
}

void eatLine(void)
{
  while (getchar() != '\n')
    continue;
}

void ToUpper(char * str)
{
  while (*str)
  {
    *str = toupper(*str);
    str++;
  }
}

void ToLower(char * str)
{
  while (*str)
  {
    *str = tolower(*str);
    str++;
  }
}

void Transpose(char * str)
{
  while (*str)
  {
    if (islower(*str))
      *str = toupper(*str);
    if (isupper(*str))
      *str = toupper(*str);
    str++;
  }
}

void Dummy(char * str)
{
//Leave string unchanged
}

void show(void (* fp)(char *), char * str)
{
  (*fp)(str);
  puts(str);
}

char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }

  return ret_val;
}