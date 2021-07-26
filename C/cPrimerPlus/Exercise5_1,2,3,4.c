#include <stdio.h>
void minutesToHours();
void printNumber();
void daysToWeeks();
void yourHeight();
int main(void)
{
    int num;

    while (1)
    {
        printf("Please enter a number(1-4, 0 to quit): ");
        scanf("%d", &num);

        if (num == 0)
        {
            printf("Bye! \n");
            break;
        } else if (num == 1)
        {
            minutesToHours();
        } else if (num == 2)
        {
            printNumber();
        } else if (num == 3)
        {
            daysToWeeks();
        } else if (num == 4)
        {
            yourHeight();
        } else {
            printf("Unkonwn input,please enter again \n");
            getchar(); //当输入两个子母或符号时，将会打印第32行printf语句的的内容
        }       
    }
    
    return 0;
}

void minutesToHours()
{
    const int minutesToHour = 60;
    int minutes;
    printf("Please enter the minutes; ");
    scanf("%d", &minutes);
    printf("%d min = %d hour + %d minutes. \n", minutes, minutes/60, minutes%60);
}

void printNumber()
{
    int integer, n;
    
    printf("Please input an integer: ");
    scanf("%d", &integer);
    n = integer;
    while (integer <= n+10)
    {
        printf("%d\t", integer);
        integer++;
    }
    printf("\n");
}

void daysToWeeks()
{
    int days;

    while (1)
    {
        printf("Please input the number of days: ");
        scanf("%d", &days);
        if (days <= 0)
        {
            break;
        }
        printf("%d days are %d weeks, %d days \n", days, days/7, days%7);
    }
}

void yourHeight()
{
    const double feetToCentimeter = 30.48;
    const double inchToCentimeter = 2.54;
    double height;

    printf("Enter a height in centimeters: ");

    while (1)
    {
        scanf("%lf", &height);
        if (height <= 0.0)
        {
            printf("Bye!");
            break;
        }
        printf("%.1lf cm = %d feet, %.1lf inches \n",height, (int)(height/feetToCentimeter)
        , (height-feetToCentimeter*(int)(height/feetToCentimeter))/inchToCentimeter);
        printf("Enter a height in centimeters(<=0 to quit): ");
    }
}