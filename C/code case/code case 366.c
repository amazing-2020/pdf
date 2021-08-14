#include <stdio.h>
int main()
{
    char str[5];
    printf("Please enter 5 numbers: ");
    scanf("%s", str);
    if (str[0] == str[4] && str[1] == str[3])
        printf("This is the number of palidrome. \n");
    else
        printf("This isn't the number of palidrome. \n");

    return 0;
}