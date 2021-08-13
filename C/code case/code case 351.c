#include <stdio.h>
void Print(char *a, int n)
{
    if (n >= 0)
    {
        printf("%c", a[n]);
        Print(a, n-1);
    }
}
int main(void)
{
    char a[5];
    
    printf("Please enter five characters: ");
    for (int i = 0; i < 5; i++)
        scanf("%c", &a[i]);
    printf("Output reslut in reserved order: ");

    Print(a, 4);
    printf("\n");
    
    return 0;
}