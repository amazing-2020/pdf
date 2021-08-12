#include <stdio.h>
#define standardWorkTime 40
#define level1 300
#define level2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25
void elimilateNewlines();

int main(void)
{
    double basicWage;
    double salary, workTime, taxes, netIncome;
    int factor = 1;
    char option;
    
    while (factor)
    {
        printf("***************************************************************** \n");
        printf("Enter the number corresponding to the desired pay rate or action: \n");
        printf("1) $8.75/hr                          2) $9.33/hr \n");
        printf("3) $10.00/hr                         4) $11.20/hr \n");
        printf("q) quit \n");
        printf("***************************************************************** \n");
        scanf("%c", &option);
        elimilateNewlines();
        switch (option)
        {
            case '1': basicWage = 8.75;
                    break;
            case '2': basicWage = 9.33;
                    break;
            case '3': basicWage = 10.00;
                    break;
            case '4': basicWage = 11.20;
                    break;
            case 'q': factor = 0;
                    continue;
            default: printf("Please enter the number (1 ~ 5): \n");
                     continue;
        }

        printf("Please enter your work time: ");
        scanf("%lf", &workTime);
        elimilateNewlines();
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

        printf("Your salary is $%0.3lf, the taxes is $%0.3lf, the net income is $%0.3lf \n\n", salary, taxes, netIncome);
    }
    
    return 0;
}

void elimilateNewlines()
{
    while (getchar() != '\n')
        continue;
}