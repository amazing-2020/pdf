#include <stdio.h>
int Factor(int n)
{
    if (n <= 1) 
    {
        return 1;
    }
    return n * Factor(n - 1);
}
int main()
{
    int n;
    printf("Please enter the factorial number to be calculated.\n");
    scanf("%d", &n);
    printf("%d \n", Factor(n));

    return 0;
}