#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define SQ(x) (x)*(x)
int main()
{
    int num;
    int again = 1;
    printf("If the value less than 50, the program will stop. \n");
    while (again)
    {
        printf("\nPlease enter a number: ");
        scanf("%d", &num);
        printf("The square of the number is: %d \n", SQ(num));
        if (num >= 50)
            again = TRUE;
        else
            again = FALSE;
    }

    return 0;
}