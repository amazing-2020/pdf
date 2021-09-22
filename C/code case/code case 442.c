#include <stdio.h>
#define SIZE 40
int main(int argc, char const *argv[])
{
    char num[SIZE];
    int n, i, j = 0, k;

    puts("Please enter the number to be enrypted: ");
    scanf("%d", &n);
    while (n)
    {
        i = n % 10;
        num[j++] = i;
        n /= 10; 
    }
    printf("The enrypted number is: ");
    for ( k = 0; k < j; k++)
    {
        num[k] = (num[k] + 5) % 10;
        printf("%d", num[k]);
    }
    printf("\n");
    
    return 0;
}
