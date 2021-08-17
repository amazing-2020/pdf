#include <stdio.h>
#define SIZE 4
#define MONTHS 12
void pnt_add();
void day_month3();

int main(void)
{
    pnt_add();
    day_month3();

    return 0;
}
void pnt_add()
{
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;
    pti = dates;
    ptf = bills;
    printf("%23s %15s \n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p \n", index, pti + index, ptf + index);
}

void day_month3()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days. \n", index+1, *(days+index));    
}