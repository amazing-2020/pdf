#include <stdio.h>

struct month {
  char monthName[10];
  char monthAbbreviations[5];
  int days;
  int monthSerialNumber;
};

struct month months[12] = {
    {"January", "Jan.", 31, 1},
    {"February", "Feb.", 28, 2},
    {"MArch", "Mar.", 31, 3},
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

int dayNum(int mon);

int main(void)
{
  int sum = 0, aMonth = 0;

  puts("Please enter the month number:");
  while ((scanf("%d", &aMonth)) != EOF)
  {
    while (getchar() != '\n')
      continue;
    if (aMonth <= 0 || aMonth > 12)
    {
      puts("Please enter a number 1-12.");
      puts("Enter the month number:");
      continue;
    }
    sum = dayNum(aMonth);
    printf("There is %d days from the start of the year.\n", sum);
    puts("Do you want to end(y to quit)?");
    if (getchar() == 'y')
      break;
    puts("Enter the month number:");
  }

  return 0;
}

int dayNum(int mon)
{
  int sum = 0, i = 0;

  while (i < mon)
  {
    sum += months[i].days;
    i++;
  }
  return sum;
}