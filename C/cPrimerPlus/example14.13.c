#include <stdio.h>
#define FUNDLEN 50
#define N 2

struct funds {
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(const struct funds money[], int n);

int main(void)
{
  struct funds jones[N] = {
      {
          "Garlic-Melon Bank",
          4032.27,
          "Lucky's savings and Loan",
          8543.94
      },
      {
          "Honest Jack's bank",
          3620.88,
          "Party times savings",
          3802.91
      }
  };
  printf("The Joneses has a total of $%.2f\n", sum(jones, N));

  return 0;
}

double sum(const struct funds money[], int n)
{
  double total;
  int i;

  for (i = 0; i < N; ++i)
    total += money[i].bankfund + money[i].savefund;

  return total;
}