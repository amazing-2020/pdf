#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 10
#define FILENAME "book-14_7.dat"
#define STAR "******"
#define HORIZONTAL "----"
#define PLUS "++++"
struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
  bool exist;
};

int topMenu();
void editRecord(struct book *, int);
int chooseRecord(int);
char editMenu();
void changeTitle(struct book *, int);
void changeAuthor(struct book *, int);
void changeValue(struct book *, int);
bool addRecord(struct book *, int);
void deleteRecord(struct book *, int);
char * s_gets(char * st, int n);
void rm_newLine();

int main(void)
{
  struct book library[MAXBKS];
  int count = 0;// count equal to the array index plus one
  int index, choice;
  FILE * pbooks;
  int size = sizeof(struct book);
  int trueSize = size - sizeof(int);

  if ((pbooks = fopen(FILENAME, "r+b")) == NULL)
  {
    fputs("Can't open the file book-14_7.dat.\n", stderr);
    if ((pbooks = fopen(FILENAME, "w+b")) != NULL)
    {
      printf("Create the data file %s\n", FILENAME);
      fclose(pbooks);
      if ((pbooks =fopen(FILENAME, "r+b")) == NULL)
      {
        fputs("Can't open the file book-14_7.dat.\n", stderr);
        exit(1);
      }
    } else {
      fputs("Can't create the file book-14_7.dat.\n", stderr);
      exit(1);
    }
  }

  /*
   * show the existing data and count it
   */
 // rewind(pbooks);
  while (count < MAXBKS && fread(&library[count], trueSize, 1, pbooks) == 1)
  {
    if (feof(pbooks))
      break;
    if (count == 0)
      puts("Current contents of book.dat.");
    printf("%d) %s by %s: $%.2f\n", count + 1, library[count].title,
           library[count].author, library[count].value);
    library[count].exist = true;
    count += 1;
  }

  while ((choice = topMenu()) != -1)
  {
    switch (choice)
    {
    case 1:
      editRecord(library, count);
      break;
    case 2:
      if (addRecord(library, count))
      {
        printf("Add it successfully\n");
        count += 1;
      }
      break;
    case 3:
      deleteRecord(library, count);
      break;
    default:
      printf("Invalid input!\n");
      break;
    }
  }

  fclose(pbooks);
  /*
   * output records and write to the file
   * write the total data from the start
   * using the "wb" model
   * it aims at modify the size of the file
   */
  if (fopen(FILENAME, "wb") == NULL)
    exit(-1);
  if (count > 0)
  {
    puts("Here is the list of your books:");
    for (index = 0; index < count; ++index)
    {
      if (library[index].exist)
      {
        printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
        fwrite(&library[index], trueSize, 1, pbooks);
      }
    }
  }
  else
    puts("No books? Too bad.");
  puts("Bye!");
  fclose(pbooks);

  return 0;
}

int topMenu()
{
  int choice = 0;

  printf("\t%s%s%s%s%s%s\n", STAR, PLUS, PLUS, PLUS, PLUS, STAR);
  printf("1) edit the exist record\t 2) add a record\n");
  printf("3) delete a record      \t-1) quit\n");
  printf("Enter: ");
  while (scanf("%d", &choice) != 1)
  {
    printf("Invalid input!\n");
    printf("Reenter: ");
    continue;
  }
  rm_newLine();

  return choice;
}

void editRecord(struct book * lib, int count)
{
  int index = 0;
  bool status = true;

  puts("Which record do you want to change?");
  while (status && (index = chooseRecord(count)) != -1)
  {
    if (!lib[index].exist)
    {
      puts("No data exists!");
      break;
    }
    printf("%d) %s by %s: $%.2f\n", index + 1, lib[index].title, lib[index].author, lib[index].value);
    void (*pfun)(struct book *, int) = NULL;

    switch (editMenu())
    {
    case 'a':
      pfun = changeTitle;
      break;
    case 'b':
      pfun = changeAuthor;
      break;
    case 'c':
      pfun = changeValue;
      break;
    case 'q':
      status = false;
      break;
    default:
      printf("Invalid input!");
      break;
    }
    if (pfun)
      (*pfun)(lib, index);
    puts("Which record do you want to change?");
  }
}

int chooseRecord(int n)
{
  int choice = -1;

  if (n == 0)
  {
    choice = -1;
    puts("No data exists");
  } else {
    printf("choose a record(1~%d,-1 to quit): ", n);
    while (scanf("%d", &choice) != 1)
    {
      rm_newLine();
      printf("Errors.Try again!\n");
    }
    rm_newLine();
    if (choice != -1)
      choice -= 1;
  }

  return choice;
}

char editMenu()
{
  char choice;

  printf("a) edit the title\t\tc) edit the author\n");
  printf("b) edit the value\t\tq) quit\n");
  printf("Enter: ");
  choice = getchar();
  rm_newLine();

  return choice;
}

bool addRecord(struct book * lib, int n)
{
  bool status = true;

  if (n == MAXBKS)
    status = false;
  else
  {
    printf("Please add new book titles: ");
    if (s_gets(lib[n].title, MAXTITL) != NULL && lib[n].title[0] != '\0')
    {
      printf("Now enter the author: ");
      s_gets(lib[n].author, MAXAUTL);
      printf("Now enter the value: ");
      scanf("%f", &lib[n].value);
      rm_newLine();
      lib[n].exist = true;
    } else {
      fprintf(stderr, "You must enter the book title!\n");
      status = false;
    }
  }

  return status;
}

void deleteRecord(struct book * lib, int n)
{
  int index = 0;

  puts("Which record do you want to delete: ");
  while ((index = chooseRecord(n)) != -1)
  {
    if (index < -1)
    {
      fprintf(stderr, "Invalid input!\n");
      continue;
    }
    lib[index].exist = false;
    printf("OK!\n");
  }
}

void changeTitle(struct book * lib, int n)
{
  printf("Enter the new title: ");
  s_gets(lib[n].title, MAXTITL);
}

void changeAuthor(struct book * lib, int n)
{
  printf("Enter the new author: ");
  s_gets(lib[n].author, MAXAUTL);
}

void changeValue(struct book * lib, int n)
{
  printf("Enter the new value: ");
  scanf("%f", &(lib[n].value));
  rm_newLine();
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

void rm_newLine()
{
  while (getchar() != '\n')
    continue;
}
/*
 * according to the problem description
 * this program should change the size of the FILENAME
 * but the existing knowledge can't solve this
 * we can change FILENAME dynamically on the alter an existing record, add a
 * record, except delete a record, the deleted record still exist in the FILENAME
 * it could be read
 */