#include <stdio.h>
void printLine(int num);
int main(void)
{
    char ch;
    int num;

    while ((ch = getchar()) != EOF)
    {
        if (ch == '\n')
        {
            putchar(ch);
            num = 0;
        }
        if (ch <= 31 && ch != '\n')
        {
            printf("^%c", ch+64);
            num++;
            printLine(num);
        }
        else 
        {
            putchar(ch);
            num++;
            printLine(num);
        }
    }
    
    return 0;
}
//不知道EOF如何表示
void printLine(int num)
{
    if ((num % 10 == 0) && num != 0)
        printf("\n");
}