#include <stdio.h>
void while1();
void while2();
int main(void)
{
    int n = 5;

    while (n < 7)
    {
        printf("n = %d \n", n);
        n++;
        printf("Now n = %d \n", n);
    }
    printf("The loop has finished.If you decide run the  loop 1 please enter 1, if loop 2 enter other things \n");
    if (getchar() == '1')
        while1();
    else
        while2();
    
    return 0;
}

void while1()
{
    int n = 0;
    
    while (n < 2)
        printf("n is %d \n", n);
        n++;
    printf("That's all this program does \n");
}

void while2()
{
    int n = 0;

    while (n++ < 2)
    {
        printf("n is %d \n", n);
    }
    printf("That's all this program does. \n");
}