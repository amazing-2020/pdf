#include <stdio.h>
#define SIZE 4
#define MONTHS 12
void day_mon1();
void no_data();
void some_data();
void day_mon2();
void designate();
void line();

int main(void)
{
    day_mon1();
    line();
    no_data();
    line();
    some_data();
    line();
    day_mon2();
    line();
    designate();

    return 0;
}

void day_mon1()
{
    int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days. \n", index+1, days[index]);
}

void no_data()
{
    int no_data[SIZE];
    int i;

    printf("%2s%14s \n",    "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d \n", i, no_data[i]);
}

void some_data()
{
    int smoe_data[SIZE] = {1492, 1066};
    int i;

    printf("%2s%14s \n",    "i", "some_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d \n", i, smoe_data[i]);    
}

void day_mon2()
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;

    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %2d days. \n", index+1, days[index]);
}

void designate()
{
    int days[MONTHS] = { 31, 28, [4] = 31, 30, 31, [1] = 29};
    int i;

    for (i = 0; i < MONTHS; i++)
        printf("%2d %d \n", i, days[i]);
}

void line()
{
    printf("-------------------------- \n");
}