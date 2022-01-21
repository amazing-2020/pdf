#include <stdio.h>
#define SIZE 10
void sum_arr1(void);
void sum_arr2(void);
int sum(int ar[], int n);
int sump(int * start, int * end);
void order(void);
int main(void)
{
    sum_arr1();
    printf("************ \n");
    sum_arr2();
    printf("************ \n");
    order();

    return 0;
}

void sum_arr1(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answers;

    answers = sum(marbles, SIZE);
    printf("The total number of marbles is %ld. \n", answers);
    printf("The size of marbles is %zd bytes. \n", sizeof marbles);
}

void sum_arr2(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answers;

    answers = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld. \n", answers);
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes. \n", sizeof ar);

    return total;
}

int sump(int * start, int * end)
{
    int total = 0;

    while (start < end)
    {
        total += *start;
        start++;
    }

    return total;
}

void order(void)
{
    int data[2] = { 100, 200};
    int moredata[2] = { 200, 400};

    int * p1, *p2, *p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("   *p1 = %d,   *p2 = %d,      *p3 = %d \n", *p1, *p2, *p3);
    printf(" *p1++ = %d,  *++p2 = %d,   (*p3)++ = %d \n", *p1++, *++p2, (*p3)++);
    printf("   *p1 = %d,   *p2 = %d,      *p3 = %d \n", *p1, *p2, *p3);
}