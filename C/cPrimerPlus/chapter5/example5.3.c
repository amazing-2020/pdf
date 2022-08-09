#include <stdio.h>
#define SQUARES 64
void Triple_assignment();
void squares();
void wheat();

int main(void)
{
    Triple_assignment();
    printf("\n");
    squares();
    printf("\n");

    wheat();

    return 0;
}

void Triple_assignment()
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68;
    printf("                  cheeta   tarzan    jane \n");
    printf("First round score %4d %8d %8d \n", cheeta, tarzan, jane);
}

void squares()
{
    int num = 1;
    printf("number square \n");
    while (num < 21)
    {
        printf("%4d %6d \n", num, num*num);
        num += 1;
    }
}

void wheat()
{
    const double CROF = 2E16;
    double current, total;
    int count = 1;

    printf("square    grains       total       ");
    printf("fraction of \n");
    printf("          added        grains      ");
    printf("world total\n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e \n", count, current, total, total/CROF);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current;   
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e \n", count, current, total, total/CROF);
    }
    printf("That's all! \n");
}