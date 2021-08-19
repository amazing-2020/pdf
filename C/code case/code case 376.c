#include <stdio.h>
#include <string.h>
int main()
{
    char c[1000];
    fgets(c, sizeof c / sizeof c[0], stdin);
    int d = strlen(c);

    char a[d];
    int j = 0;
    for (int i = d - 1; i >= 0; i--)
    {
        a[i] = c[j];
        j++;
    }
    puts(a);

    return 0;
}

/** Error: 
 * input    ainiqusi
 * output   isuqinia@ */