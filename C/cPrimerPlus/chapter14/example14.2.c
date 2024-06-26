#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100

struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

int main(void)
{
  struct book Library[MAXBKS];
  int count = 0;
  int index;

  printf("Please enter the book title.\n");
  printf("Press the [Enter] at the start of a line to stop.\n");
  while (count < MAXBKS && s_gets(Library[count].title, MAXTITL) != NULL
         && Library[count].title[0] != '\0')
  {
    printf("Now Enter the author.\n");
    s_gets(Library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &Library[count++].value);
    while (getchar() != '\n')
      continue;
    if (count < MAXBKS)
      printf("Enter the next title.\n");
  }
  if (count > 0)
  {
    printf("Here is the list of your books:\n");
    for (index = 0; index < count; ++index)
      printf("%s by %s: $%.2f\n",
             Library[index].title, Library[index].author, Library[index].value);
  }
  else
    printf("No books? Too bad.\n");

  return 0;
}

char * s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

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