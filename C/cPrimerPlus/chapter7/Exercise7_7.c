#include <stdio.h>
#define basicWage 10
#define standardWorkTime 40
#define level1 300
#define level2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
int main(void)
{
    double salary, workTime, taxes, netIncome;

    printf("Please enter your work time: ");
    scanf("%lf", &workTime);
    if (workTime <= 40.0)
        salary = basicWage * workTime; 
    else
        salary = 1.5 * (workTime - 40) + 40 * basicWage;
    if (salary <= level1)
        taxes = salary * RATE1;
    else if (salary <= level2)
        taxes = (salary - level1) * RATE2 + level1 * RATE1;
    else
        taxes = (salary - level2) * RATE3 + (level2 - level1) * RATE2 + level1 * RATE1;
    netIncome = salary - taxes;

    printf("Your salary is $%0.3lf, the taxes is $%0.3lf, the net income is $%0.3lf \n", salary, taxes, netIncome);

    return 0;
}