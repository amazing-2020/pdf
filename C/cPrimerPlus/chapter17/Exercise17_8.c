#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "17_8_tree.h"

void makeKind(Kind * pk);
char menu(void);
void addpet(Tree * pt);
void droppet(Tree * pt);
void showpets(const Tree * pt);
void findpet(const Tree * pt);
void printitem(Item item);
void uppercase(char * str);
char * s_gets(char * st, int n);

int main(void)
{
  Tree pets;
  char choice;

  InitializeTree(&pets);
  while ((choice = menu()) != 'q')
  {
    switch (choice)
    {
    case 'a':
      addpet(&pets);
      break;
    case 'l':
      showpets(&pets);
      break;
    case 'f':
      findpet(&pets);
      break;
    case 'n':
      printf("%d pets in club.\n", TreeItemCount(&pets));
      break;
    case 'd':
      droppet(&pets);
      break;
    default:
      puts("Switching error!");
    }
  }
  DeleteAll(&pets);
  puts("Bye!");

  return 0;
}

char menu(void)
{
  int ch;

  puts("Nerfville Pet Club Membership Program");
  puts("Enter the letter corresponding to your choice");
  puts("a) add a pet         l) show list of pets");
  puts("n) number of pets    f) find pets by name");
  puts("d) delete a pet      q) quit");
  while ((ch = getchar()) != EOF)
  {
    while (getchar() != '\n')
      continue;
    ch = tolower(ch);
    if (strchr("alfndq", ch) == NULL)
      puts("Please enter an a, l, f, n, d, or q:");
    else
      break;
  }
  if (ch == EOF)
    ch = 'q';

  return ch;
}

void addpet(Tree * pt)
{
  Item temp;

  if (TreeIsFull(pt))
    puts("No room in the club");
  else
  {
    puts("Please enter name of pet:");
    s_gets(temp.petname, SLEN);
    puts("Please enter pet kind:");
    temp.pKind = (Kind *)malloc(sizeof(Kind));
    temp.pKind->next = NULL;
    s_gets(temp.pKind->petkind, SLEN);
    uppercase(temp.petname);
    uppercase(temp.pKind->petkind);
    if (AddItem(&temp, pt))
      puts("Success");
    else
      printf("Wrong\n");
  }
}

void showpets(const Tree * pt)
{
  if (TreeIsEmpty(pt))
    puts("No entries");
  else
    Traverse(pt, printitem);
}

void printitem(Item item)
{
  printf("Pet-name: %-19s Kind:", item.petname);
  Kind * pk = item.pKind;
  while (pk != NULL)
  {
    printf("%-19s", pk->petkind);
    pk = pk->next;
  }
  printf("\n");
}

void findpet(const Tree * pt)
{
  Item temp;

  if (TreeIsEmpty(pt))
  {
    puts("No entries");
    return;
  }

  puts("Please enter the name of pet you wish to find:");
  s_gets(temp.petname, SLEN);
  uppercase(temp.petname);
  temp = InTree(&temp, pt);
  printitem(temp);
}

void droppet(Tree * pt)
{
  Item temp;

  if (TreeIsEmpty(pt))
  {
    puts("No entries");
    return;
  }

  puts("Please enter the name of pet you wish to delete:");
  s_gets(temp.petname, SLEN);
  puts("Please enter pet kind:");
  temp.pKind = (Kind *)malloc(sizeof(Kind));
  temp.pKind->next = NULL;
  s_gets(temp.pKind->petkind, SLEN);
  uppercase(temp.petname);
  uppercase(temp.pKind->petkind);
  printf("%s the %s ", temp.petname, temp.pKind->petkind);
  if (DeleteItem(&temp, pt))
    printf("is dropped from the club.\n");
  else
    printf("is not a member.\n");
}

void uppercase(char * str)
{
  while (*str)
  {
    *str = toupper(*str);
    str++;
  }
}

char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr( st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}
