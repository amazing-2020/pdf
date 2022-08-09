#include <stdio.h>
double min(double x, double y);
void chline(char ch, int i, int j);
int main(void)
{
    double x, y;
    int i, j;
    char ch;

    printf("Please enter two number: ");
    scanf("%lf %lf", &x, &y);
    double number = min(x, y);
    printf("The mininum between %lf and %lf is %lf \n", x, y, number);

    printf("Please enter a character to print: ");
    while (getchar() != '\n')
        continue;
    ch = getchar();
    printf("How many lines would like to print %c: ", ch);
    scanf("%d", &j);
    printf("How many columns would like to print %c: ", ch);
    scanf("%d", &i);
    chline(ch, i, j);

    return 0;
}

double min(double x, double y)
{
    return (x > y) ? x : y;
}

void chline(char ch, int i, int j)
{
    int n, m;

    for (n = 0; n < j; n++)
    {
        for (m = 0; m < i; m++)
            putchar(ch);
        printf("\n");
    }
}