#include <stdio.h>
int digit(int k);
void reverseprintNum(int g);
int main(void)
{
    int num;
    printf("Please enter a digit: ");
    scanf("%d", &num);
    printf("%d numbers. \n", digit(num));
    printf("Reversed number: ");
    reverseprintNum(num);
    printf("\n");
    
    return 0;
}

int digit(int k)
{
    if ( k / 10 == 0)   return 1;
    else return digit(k / 10) + 1;
}

void reverseprintNum(int g)
{
    if (g / 10 == 0) printf("%d", g);
    else 
    {
        printf("%d", g % 10);
        reverseprintNum(g / 10);
    }
}