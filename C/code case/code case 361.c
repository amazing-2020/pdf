#include <stdio.h>
int count = 0;
void p();
int main(void)
{
    p();
    printf("\n");
    printf("%d \n", count);
    return 0;
}

void p()
{
    char ch;

    if ((ch = getchar()) != '\n')
    {
        count += 1;
        p();
    }
    if (ch != '\n')
        printf("%c", ch);
}