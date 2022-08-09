#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct month {
  char monthName[10];
  char monthAbbreviations[5];
  int days;
  int monthSerialNumber;
};

struct month months[12] = {
    {"January", "Jan.", 31, 1},
    {"February", "Feb.", 28, 2},
    {"March", "Mar.", 31, 3},
    {"April", "Apr.", 30, 4},
    {"May", "MAy.", 31, 5},
    {"June", "Jun.", 30, 6},
    {"July", "Jul.", 31, 7},
    {"August", "Aug.", 31, 8},
    {"September", "Sep.", 30, 9},
    {"October", "Oct.", 31, 10},
    {"November", "Nov.", 30, 11},
    {"December", "Dec.", 31, 12}
};

bool leapYear(long year);
int theMonth(char * month);
int sum(int month, int days, bool isLeap);
char * s_gets(char * str);
void rm_Line();

int main(void)
{
  long year = 0;
  int days = 0, monthNum = 0, sumDays = 0;
  char month[10];
  bool isLeapYear = false;

  puts("Please enter the year: ");
  scanf("%ld", &year);
  isLeapYear = leapYear(year);
  rm_Line();
  printf("Enter the month(name, number or abbreviation): ");
  s_gets(month);
  monthNum = theMonth(month);
  printf("How many days from beginning of the month: ");
  scanf("%d", &days);
  sumDays = sum(monthNum, days, isLeapYear);
  printf("There %d days.\n", sumDays);

  return 0;
}

bool leapYear(long year)
{
  if ((year % 4 == 0 && year % 100 != 100) || year % 400 == 400)
    return true;
  else
    return false;
}

int theMonth(char * month)
{
  int theMonthNum = 0;
  /*
   * This is the month number;
   */
  if (month[0] > 49 && month[0] < 57)
  {
    if (strlen(month) > 2)
    {
      fprintf(stderr, "This is not a valid month number.\n");
      exit(1);
    }
    if (strlen(month) > 1)
      theMonthNum = (month[0] - 48) * 10 + (month[1] - 48);
    else
      theMonthNum = month[0] - 48;
  } else {
    for (int i = 0; i < 12; ++i)
    {
      if (strcmp(months[i].monthName, month) == 0)
      {
        theMonthNum = months[i].monthSerialNumber;
        break;
      }
      if (strcmp(months[i].monthAbbreviations, month) == 0)
      {
        theMonthNum = months[i].monthSerialNumber;
        break;
      }
    }
  }
  if (theMonthNum == 0)
  {
    fprintf(stderr, "Can't find a valid month.");
    exit(1);
  }

  return theMonthNum;
}

int sum(int month, int days, bool isLeap)
{
  int sum = 0;

  for (int i = 0; i < month-1; ++i)
    sum += months[i].days;
  sum += days;
  if (month >= 2 && isLeap)
  {
    if (month == 2)
    {
      if (days > 29)
        sum -= days - 29;
    }
    else
      sum += 1;
  }

  return sum;
}

char * s_gets(char * str)
{
  char * ret_val;
  int i = 0;

  ret_val = fgets(str, 10, stdin);
  if (ret_val)
  {
    while (str[i] != '\n' && str[i] != '\0')
      i++;
    if (str[i] == '\n')
      str[i] = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}

void rm_Line()
{
  while (getchar() != '\n')
    continue;
}