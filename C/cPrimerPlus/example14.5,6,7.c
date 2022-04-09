#include <stdio.h>
#define FUNDLEN 50

struct funds {
  char bank[FUNDLEN];
  double bankfund;
  char save[FUNDLEN];
  double savefund;
};

double sum(double , double );//The arguments are two double variable
double sum2(const struct funds *); //The argument is a pointer
double sum3(struct funds moolah);//The argumant is a struct
int main(void)
{
  struct funds stan = {
      "Garlic-Melon Bank",
      4032.27,
      "Luckys's savings and Loan",
      8543.94
  };
  printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
  printf("Stan has a total of $%.2f.\n", sum2(&stan));
  printf("Stan has a total of $%.2f.\n", sum3(stan));

  return 0;
}

double sum(double x, double y)
{
  return (x + y);
}

double sum2(const struct funds * money)
{
  return (money->bankfund + money->savefund);
}

double sum3(struct funds moolah)
{
  return (moolah.bankfund + moolah.savefund);
}