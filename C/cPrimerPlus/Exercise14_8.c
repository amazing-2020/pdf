#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //true = 1
#include <ctype.h>
#define MAXNAME 40
#define SEATN 12
#define FILENAME "airline-14_8.dat"
typedef struct Seats {
  char id;
  bool owned;
  char fName[MAXNAME];
  char lName[MAXNAME];
}seat;
int size = sizeof(seat);

void showMenu();
void showEmptyNum(seat *);
void showEmptySeat(seat *);
void showSeat(seat *);
void addCustomer(FILE *, seat *);
void deleteCustomer(FILE *, seat *);
char * s_gets(char *str, int n);
void rmNewLine();

int main(void)
{
  seat airline[SEATN]={0};
  FILE * pseat;
  bool fileExist = true, next = true;
  char choice;

  if ((pseat = fopen(FILENAME, "rb+")) == NULL)
  {
    fileExist = false;
    if ((pseat = fopen(FILENAME, "wb+")) == NULL)
    {
      fprintf(stderr, "The file %s doesn't exists and can't be created.\n", FILENAME);
      exit(1);
    } else {
      printf("Create the data file!\n");
    }
  }

  /*
   * if the file doesn't exist, set the seat identification number
   */
  if (!fileExist)
  {
    for (int i = 0; i < SEATN; ++i)
      airline[i].id = i + 'A';
  }
  /*
   * if the file doesn't exist, initialize the data file
   */
  if (!fileExist)
  {
    for (int i = 0; i < SEATN; ++i)
      if (fwrite(&airline[i], size, 1, pseat) == EOF)
      {
        fprintf(stderr, "Can't initialize the data\n");
        fclose(pseat);
        exit(1);
      }
  }
  showMenu();
  while ((choice = getchar()) != 'f' && next)
  {
    rmNewLine();
    void (*pfun)(seat *) = NULL;
    void (*pfunF)(FILE *, seat *) = NULL;
    switch (choice)
    {
      case 'a':
        pfun = showEmptyNum;
        break;
      case 'b':
        pfun = showEmptySeat;
        break;
      case 'c':
        pfun = showSeat;
        break;
      case 'd':
        pfunF = addCustomer;
        break;
      case 'e':
        pfunF = deleteCustomer;
        break;
      case 'f':
        next = false;
        break;
      default:
        printf("Invalid input.\n");
        break;
    }
    if (next)
    {
      if (pfun)
      {
        fseek(pseat, 0, SEEK_SET);
        for (int i = 0; i < SEATN; ++i)
          fread(&airline[i], size, 1, pseat);
        (*pfun)(airline);
      }
      if (pfunF)
        (*pfunF)(pseat, airline);
      showMenu();
    }
  }
  printf("Bye!\n");
  fclose(pseat);

  return 0;
}

void showMenu()
{
  printf("To choose a function, enter its letter label:\n");
  printf("a) Show number of empty seats\n");
  printf("b) Show list of empty seats\n");
  printf("c) Show alphabetical list of seats\n");
  printf("d) Assign a customer to a seat assignment\n");
  printf("e) Delete a seat assignment\n");
  printf("f) Quit\n");
}

void showEmptyNum(seat * arr)
{
  int num = 0;

  for (int i = 0; i < SEATN; ++i)
    if (!arr[i].owned)
      num += 1;
  printf("%d seats is empty.\n", num);
}

void showEmptySeat(seat * arr)
{
  printf("Seat: ");
  for (int i = 0; i < SEATN; ++i) {
    if (!arr[i].owned)
      printf("%c ", arr[i].id);
  }
  printf("is empty.\n");
}

void showSeat(seat * arr)
{
  for (int i = 0; i < SEATN; ++i) {
   if (arr[i].owned)
      printf("seat %c is owned by %s %s.\n", arr[i].id, arr[i].fName, arr[i].lName);
    else
      printf("seat %c is empty.\n", arr[i].id);
  }
}

void addCustomer(FILE * fp, seat * arr)
{
  int addCount = 0;
  int index = 0;

  printf("Seats ");
  for (int i = 0; i < SEATN; ++i) {
    if (!arr[i].owned)
    {
      printf("%c ", arr[i].id);
      addCount += 1;
    }
  }
  printf(" could been add, total %d\n", addCount);
  if (addCount == 0)
    return;
  printf("Enter the seat id you want to change: ");
  index = toupper(getchar()) - 'A';
  rmNewLine();
  if (index > 12 || index < 0 || arr[index].owned)
  {
    fprintf(stderr, "The seat doesn't exist.\n");
    return;
  }

  printf("Enter the first name: ");
  if (s_gets(arr[index].fName, MAXNAME) != NULL)
  {
    printf("Enter the last name: ");
    if (s_gets(arr[index].lName, MAXNAME) != NULL)
    {
      arr[index].owned = true;
      /*
       * move the file pointer to the destination
       */
      fseek(fp, size * index, SEEK_SET);
      if (fwrite(&(arr[index]), size, 1, fp) == EOF)
      {
        fprintf(stderr, "Can't write to the file.\n");
        fclose(fp);
        exit(1);
      }
    }
  }
}

void deleteCustomer(FILE * fp, seat * arr)
{
  int index = 0;

  printf("Which record did you want to delete(Enter the seat's id A~L): ");
  index = toupper(getchar()) - 'A';
  rmNewLine();
  if (!arr[index].owned)
  {
    printf("It is empty!\n");
    return;
  }
  arr[index].owned = false;
  strcpy(arr[index].fName, "");
  strcpy(arr[index].lName, "");
  fseek(fp, index * size, SEEK_SET);
  if (fwrite(&arr[index], size, 1, fp) == EOF)
  {
    fprintf(stderr, "Can't delete the data\n");
    fclose(fp);
    exit(1);
  }
}

char * s_gets(char *str, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(str, MAXNAME, stdin);
  if (ret_val)
  {
    find = strchr(str, '\n');
    *find = '\0';
    while (getchar() != '\n')
      continue;
  }

  return ret_val;
}

void rmNewLine()
{
  while (getchar() != '\n')
    continue;
}