#include <stdio.h>

int main() 
{
    char c;
    int letter=0, space=0, digit=0, others=0;
    printf("Please enter some character: ");
    while ((c=getchar()) != '\n')
    {
        if ((c >= 'a' && c <='z')||(c>='A' && c<='Z')) letter++;
        else if (c >= '0' && c<='9') digit++;
        else if (c == ' ') space++;
        else others++;
    }

    printf("%d %d %d %d \n", letter, digit, space, others);

    return 0;
}