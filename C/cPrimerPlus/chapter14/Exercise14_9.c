#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h> //true = 1
#include <ctype.h>
#define MAXNAME 40
#define SEATN 12
#define LINEN 4
#define FILENAME "airline-14_9.dat"
typedef struct Seats {
  char id;
  bool owned;
  char fName[MAXNAME];
  char lName[MAXNAME];
}seat;
typedef struct Airline {
  int flightN;
  seat flight[SEATN];
}airLine;
int sizeS = sizeof(seat);
int sizeA = sizeof(airLine);
int lines[LINEN] = {102, 311, 444, 519};

void lineMenu();
void configMenu();
void readToBuff(FILE *, airLine *, int );
void showEmptyNum(seat *);
void showEmptySeat(seat *);
void showSeat(seat *);
void addCustomer(seat *);
void deleteCustomer(seat *);
void confirmAllocation(FILE *, airLine *, int );
char * s_gets(char *str, int n);
void rmNewLine();

int main(void)
{
  //seat airline[SEATN]={0};
  airLine colossus[LINEN] = {0};
  FILE * pseat;
  bool fileExist = true;
  int lineChoice = 0;

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
   * or write it on hand, using the char array
   */
  if (!fileExist)
  {
    /*
    for (int i = 0; i < SEATN; ++i)
      airline[i].id = i + 'A';
  */
    for (int i = 0; i < LINEN; ++i) {
      colossus[i].flightN = lines[i];
      for (int j = 0; j < SEATN; ++j) {
        colossus[i].flight[j].id = 'A' + j;
      }
    }
  }
  /*
   * if the file doesn't exist, initialize the data file
   */
  if (!fileExist)
  {
    for (int i = 0; i < LINEN; ++i)
      if (fwrite(&colossus[i], sizeA, 1, pseat) == EOF)
      {
        fprintf(stderr, "Can't initialize the data\n");
        fclose(pseat);
        exit(1);
      }
  }
  lineMenu();
  while ((scanf("%d", &lineChoice)) != EOF && lineChoice != -1)
  {
    rmNewLine();
    if (lineChoice < 1 || lineChoice > 4)
    {
      printf("Invalid input.\n");
      continue;
    } else {
      int cIndex = lineChoice - 1;
      char choice;
      configMenu();
      readToBuff(pseat, colossus, cIndex);
      while ((choice = getchar()) != 'g')
      {
        rmNewLine();
        void (*pfun)(seat *) = NULL;
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
          pfun = addCustomer;
          break;
        case 'e':
          pfun = deleteCustomer;
          break;
        case 'f':
          confirmAllocation(pseat, &colossus[cIndex], cIndex);
          break;
        case 'g':
          break;
        default:
          printf("Invalid input.\n");
          break;
        }
        if (pfun)
          (*pfun)(colossus[cIndex].flight);
        if (choice == 'g')
          readToBuff(pseat, colossus, cIndex);
        configMenu();
      }
    }
    lineMenu();
  }
  printf("Bye!\n");
  fclose(pseat);

  return 0;
}

void lineMenu()
{
  printf("To choose a flight, enter the flight number:\n");
  printf(" 1) 102\t\t3) 444\n");
  printf(" 2) 311\t\t4) 519\n");
  printf("-1) quit\n");
}

void configMenu()
{
  printf("To choose a function, enter its letter label:\n");
  printf("a) Show number of empty seats\n");
  printf("b) Show list of empty seats\n");
  printf("c) Show alphabetical list of seats\n");
  printf("d) Assign a customer to a seat assignment\n");
  printf("e) Delete a seat assignment\n");
  printf("f) confirm the seat allocation\n");
  printf("g) return to the top menu\n");
}

void readToBuff(FILE * fp, airLine * arr, int index)
{
  fseek(fp, sizeof(int) + sizeA * index, SEEK_SET);
  for (int i = 0; i < SEATN; ++i)
    fread(&arr[index].flight[i], sizeS, 1, fp);
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

void addCustomer(seat * arr)
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
    }
  }
}
/*
 * can't delete all the data in the file, only the first character was deleted
 * strcpy(arr[index].fName, "");
 * strcpy(arr[index].lName, "");
 */
void deleteCustomer(seat * arr)
{
  int index = 0;
  char empty[MAXNAME] = {0};
  printf("Which record did you want to delete(Enter the seat's id A~L): ");
  index = toupper(getchar()) - 'A';
  rmNewLine();
  if (!arr[index].owned)
  {
    printf("It is empty!\n");
    return;
  }
  arr[index].owned = false;
  for (int i = 0; i < MAXNAME; ++i) {
    arr[index].fName[i] = '\0';
    arr[index].lName[i] = '\0';
  }
}

void confirmAllocation(FILE * fp, airLine * arr, int index)
{
  char ch;

  printf("Do you want to storage the change(y to yes, others to no)?\n");
  if (tolower((ch = getchar())) != 'y')
    return;
  else
  {
    fseek(fp, index * sizeA, SEEK_SET);
    if (fwrite(arr, sizeA, 1, fp) == EOF)
    {
      fprintf(stderr, "Can't write to the data file.\n");
      fclose(fp);
      exit(1);
    }
  }
  rmNewLine();
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