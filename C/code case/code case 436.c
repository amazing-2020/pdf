#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int p, i;
    long int sum = 9;
    printf("Please enter a prime number: ");
    scanf("%d", &p);
    for (i = 1; ; i++)
        if (sum % p == 0)
            break;
        else
            sum = sum * 10 + 9;
    printf("The prime number %d could divide %d the number composed of 9 %ld \n", p, i, sum);

    return 0;
}
