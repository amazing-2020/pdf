#include <stdio.h>
int main(void)
{
    char ch;
    int num = 0;
    FILE *fp;

    fp = fopen("Exercise8_1.c", "r");
    while ((ch = getc(fp)) != EOF)
        num++;
    printf("%d characters. \n", num);

    return 0;
}