#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
  int exist;
};
void changeTitle(FILE *, struct book *, int, int);
void changeAuthor(FILE *, struct book *, int, int);
void changeValue(FILE *, struct book *, int, int);
void getInfo(struct book *, int);
char * s_gets(char * st, int n);
void rm_newLine();

int main(void)
{
  struct book library[MAXBKS];
  int count = 0;
  int index, filecount;
  FILE * pbooks;
  int size = sizeof(struct book);

  if ((pbooks = fopen(FILENAME, "r+b")) == NULL)
  {
    fputs("Can't open the file book-14_7.dat.\n", stderr);
    exit(1);
  }

  rewind(pbooks);
  while (count < MAXBKS && fread(&library[count], size, 1, pbooks) == 1)
  {
    if (count == 0)
      puts("Current contents of book.dat.");
    printf("%s by %s: $%.2f\n", library[count].title, library[count].author, library[count].value);
    /*
     * change the record status
     * 0 to delete, others to be keep
     */
    library[count].exist = 1;
    printf("%sDo you want to delete this record (1 exist, 0 delete)?\n", STAR);
    scanf("%d", &(library[count].exist));
    if (library[count].exist != 0)
      library[count].exist = 1;
    rm_newLine();
    /* end */

    /*
     * change the records.
     * If the record don't delete it, it could be changed
     */
    if (library[count].exist)
    {
      printf("%sDo you want to change the record info(y to change)?\n", STAR);
      if (getchar() == 'y')
      {
        int i;
        void ( *pfun)(FILE *,struct book *, int, int);

        rm_newLine();
        printf("%sWhich item do you want to change?\n", STAR);
        printf("\t%s1.title   2.author    3.value%s\n", HORIZONTAL, HORIZONTAL);
        if (scanf("%d", &i) == EOF)
        {
          fprintf(stderr, "Invalid input!\n");
          exit(-1);
        }
        rm_newLine();
        switch (i) {
          case 1:
            pfun = changeTitle;
            break;
          case 2:
            pfun = changeAuthor;
            break;
          case 3:
            pfun = changeValue;
            break;
          default:
            printf("Invalid option!\n");
            break;
          }
          (*pfun)(pbooks, library, count, size);
      } else{
        rm_newLine();
      }
    }
    /* end */
    count++;
  }
  filecount = count;
  if (count == MAXBKS)
  {
    fputs("The book.dat is full.", stderr);
    exit(2);
  }

  /*
   * rewrite the information to the arr that should be deleted
   */
  for (int i = 0; i < count; ++i) {
    if (!library[i].exist)
    {
      printf("\t%sChange the record %d%s\n", HORIZONTAL, i, HORIZONTAL);
      getInfo(library, i);
      fseek(pbooks, i * size, SEEK_SET);
      fwrite(&library[i], size, 1, pbooks);
      printf("%sChanged!\n", PLUS);
    }
  }
  fseek(pbooks, 0, SEEK_END);
  /* end */

  puts("Please add new book titles.");
  puts("Press[Enter] at the start of the line to stop.");
  while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
         && library[count].title[0] != '\0')
  {
    getInfo(library, count);
    count++;
  }

  /*
   * output records and write to the file
   */
  if (count > 0)
  {
    puts("Here is the list of your books:");
    for (index = 0; index < count; ++index)
      printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
    fwrite(&library[filecount], size, count - filecount, pbooks);
  }
  else
    puts("No books? Too bad.");
  puts("Bye!");
  fclose(pbooks);

  return 0;
}

void getInfo(struct book * lib, int n)
{
  puts("Please add new book titles.");
  if (s_gets(lib[n].title, MAXTITL) == NULL)
  {
    fprintf(stderr, "Change failed!\n");
    exit(-1);
  }
  puts("Now enter the author.");
  s_gets(lib[n].author, MAXAUTL);
  puts("Now enter the value.");
  scanf("%f", &lib[n].value);
  rm_newLine();
  if (n < MAXBKS)
    puts("Enter the next title.");
}

void changeTitle(FILE * pbooks, struct book * lib, int n, int size)
{
  printf("Enter the new title: ");
  s_gets(lib[n].title, MAXTITL);
  /*
   * this also available for the first record
   * fseek(pbooks, 0, SEEK_SET);
   */
  fseek(pbooks, -size, SEEK_CUR);
  fwrite(lib[n].title, MAXTITL, 1, pbooks);
  fseek(pbooks, size - MAXTITL, SEEK_CUR);
}

void changeAuthor(FILE * pbooks, struct book * lib, int n, int size)
{
  printf("Enter the new author: ");
  s_gets(lib[n].author, MAXAUTL);
  fseek(pbooks, -(size - MAXTITL), SEEK_CUR);
  fwrite(lib[n].author, MAXAUTL, 1, pbooks);
  fseek(pbooks, 8, SEEK_CUR);
}

void changeValue(FILE * pbooks, struct book * lib, int n, int size)
{
  printf("Enter the new value: ");
  scanf("%f", &(lib[n].value));
  fseek(pbooks, -8, SEEK_CUR);
  fwrite(&(lib[n].value), 8, 1, pbooks);
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