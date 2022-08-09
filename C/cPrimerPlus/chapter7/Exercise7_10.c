#include <stdio.h>
#define unmarried 1
#define headOfHousehold 2
#define marriedAndShare 3
#define marriedAndDivorced 4
#define END 5
int main(void)
{
    double salary, taxes, level;
    int factor = 1, option;

    while (factor)
    {
        printf("Please enter your identity(1 ~ 5, 5 to quit): ");
        scanf("%d", &option);
        switch (option)
        {
            case unmarried: level = 17850;
                            break;
            case headOfHousehold: level = 2390;
                                  break;
            case marriedAndShare: level = 29750;
                                  break;
            case marriedAndDivorced: level = 14875;
                                      break;
            case END: factor = 0;
                      continue;
            default: printf("Error input \n"); 
                     continue;
        }
        printf("Please enter your salary: ");
        factor = scanf("%lf", &salary);
        if (!factor)
        {
            factor = 1;
            continue;
        }
        if (salary > level)
            taxes = level * 0.15 + (salary - level) * 0.28;
        else
            taxes = salary * 0.15;
        printf("Your should $%lf in tax \n", taxes);
    }
    printf("Bye! \n");

    return 0;
}