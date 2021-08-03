#include <stdio.h>
void twoPeopleInvest();
void withdrawMoney();
void makeFriends();
int main(void)
{
    twoPeopleInvest();
    printf("\n");
    withdrawMoney();
    printf("\n");
    makeFriends();

    return 0;
}
void twoPeopleInvest()
{
    const double baseCapital = 100;
    double dapneAssets = baseCapital, deirdreAssets = baseCapital;
    int i = 0;

    do
    {
        i++;
        dapneAssets += baseCapital * 0.1;
        deirdreAssets = deirdreAssets * (1 + 0.05);
    } while (dapneAssets > deirdreAssets);
    printf("%d years past, Deirdr will have more money. \n", i);
    printf("At this year Daphne has %5.4lf$, Deirdre has %5.4lf$ \n", dapneAssets, deirdreAssets);
}

void withdrawMoney()
{
    double money = 1.0E6;
    int i;

    for (i = 0;money > 0; i++)
    {
        money = money * (1+0.08) - 1E5;
    }
    printf("%d years passed, Chuckie Lucky whithdraw his money. \n", i);
}

void makeFriends()
{
    int friends = 5;
    int i = 0;

    while (friends < 150)//no use **for** loop
    {
        i++;
        friends = (friends - i) * 2;
    }
    printf("At %dth week, Dr.Rabnud has %d friends. \n", i--, friends);
}