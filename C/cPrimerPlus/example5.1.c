#include <stdio.h>
#define ADJUST 7.31
void show(double scale, double shoe);
void show2(double scale, double shoe);
int main(void)
{
    const double SCALE = 0.333;
    double shoe1 = 9.0, shoe2 = 3.0;

    show(SCALE, shoe1);
    show2(SCALE, shoe2);

    return 0;
}

void show(double scale, double shoe)
{
    double foot;
    foot = scale*shoe + ADJUST;
    printf("Shoe size (men's)    foot length \n");
    printf("%10.1f %15.2f inches \n", shoe, foot);
}

void show2(double scale, double shoe) 
{
    double foot;
    
    printf("Shoe size (men's)    foot length \n");
    while (shoe < 18.5)
    {
        foot = scale*shoe + ADJUST;
        printf("%10.1f %15.2f inches \n", shoe, foot);
        shoe += 1.0;
    }
    printf("If the shoe fits, wear it. \n");
}