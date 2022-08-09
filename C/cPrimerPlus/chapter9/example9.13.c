#include <stdio.h>
void swap(void);
void interchange1(int u, int v);
void interchange2(int u, int v);
void interchange3(int * u, int * v);
int main(void)
{
    swap();

    return 0;
}
void swap(void)
{
    int x = 5, y = 10;

    printf("Originally x = %d, y = %d \n", x, y);
    interchange1(x, y);
    printf("Now x = %d, y = %d \n", x, y);
    x = 5, y = 10;
    printf("Originally x = %d, y = %d \n", x, y);
    interchange2(x, y);
    printf("Now x = %d, y = %d \n", x, y);
    x = 5, y = 10;
    printf("Originally x = %d, y = %d \n", x, y);
    interchange3( &x, &y);
    printf("Now x = %d, y = %d \n", x, y);
}

void interchange1(int u, int v)
{
    int temp;

    temp = u;
    u = v;
    v = temp;
}

void interchange2(int u, int v)
{
    int temp;

    printf("\nOriginally u = %d, y = %d \n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d, v = %d \n\n", u, v);
}

void interchange3(int * u, int * v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}