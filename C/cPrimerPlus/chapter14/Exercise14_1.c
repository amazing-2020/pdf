#include <stdio.h>
#include <string.h>
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

int dayNum(char *mon);

int main(void)
{
  int sum = 0;
  char aMonth[10];
  puts("Please enter the month name:");
  while ((scanf("%s", aMonth)) != EOF)
  {
    while (getchar() != '\n')
      continue;
    sum = dayNum(aMonth);
    printf("There is %d days from the start of the year.\n", sum);
    puts("Do you want to end(y to quit)?");
    if (getchar() == 'y')
      break;
    puts("Enter the month name:");
  }

  return 0;
}

int dayNum(char *mon)
{
  int sum = 0, i = 0, month = 0;

  for (int j = 0; j < 12; ++j)
    if (strcmp(mon, months[j].monthName) == 0 ||
        strcmp(mon, months[j].monthAbbreviations) == 0)
    {
      month = j + 1;
      break;
    }

  while (i < month)
  {
    sum += months[i].days;
    i++;
  }
  return sum;
}