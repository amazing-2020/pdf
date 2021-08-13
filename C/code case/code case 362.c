#include <stdio.h>
#include <string.h>
int main(void)
{
    int i;
    char a[100], b[100];

    printf("Please enter anumber: ");
    scanf("%[^\n]s", a);
    for (i = 0; i <= strlen(a); i++)
        b[i] = a[strlen(a) - 1 - i];
    printf("'%s' is the reversed number, it has %d numbers.", b, strlen(a));

    return 0;
}