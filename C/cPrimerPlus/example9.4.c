#include <stdio.h>
void misuse(void);
int imax();
void proto(void);
int imax2(int, int);
int main(void)
{
    misuse();
    proto();

    return 0;
}

void misuse(void)
{
    printf("The maxinum of %d and %d is %d. \n", 3, 5, imax(3));
    printf("The maxinum of %d and %d is %d. \n", 3, 5, imax(3.0, 5.0));
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}

void proto(void)
{
    printf("The maxinum of %d and %d is %d. \n", 3, 5, imax2(3, 5));
    printf("The maxinum of %d and %d is %d. \n", 3, 5, imax2(3.0, 5.0));
}

int imax2(int m, int n)
{
    return (n > m ? n : m);
}