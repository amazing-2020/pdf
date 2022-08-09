#include <stdio.h>
#define SIZE 10
int maxNum(int ar[]);
int maxIndex(double ar[]);
double sizeDifference(double ar[]);
void reverse(double ar[]);
int main(void)
{
    int array[SIZE] = { 1, 45, 78, 23, 56, 89, 78, 56, 45, 78};
    double arr[SIZE] = {12.2, 15645.1, 454.1, 464879.2, 878.0, 12, 435, 435, 45, 99};
    double arr2[SIZE];

    printf("The max number in it: %d \n", maxNum(array));
    printf("The max number is the %dth number in double arr, and the difference between the max and the min id %0.1lf\n", maxIndex(arr)+1, sizeDifference(arr));
    reverse(arr);
    
    return 0;
}

int maxNum(int ar[])
{
    int max = *ar;

    for (int i = 0; i < SIZE; i++)
    {
        if (max < ar[i])
            max = ar[i];
    }
    return max;
}

int maxIndex(double ar[])
{
    double max = 0;
    int index = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
            index = i;
        }
    }
    return index;
}

double sizeDifference(double ar[])
{
    double difference = 0, min = *ar;

    for (int i = 0; i < SIZE; i++)
        if (min > ar[i])
            min = ar[i];

    difference = ar[maxIndex(ar)] - min;

    return difference;
}

void reverse(double ar[])
{
    int i, j;
    double tmp;

    for (i = 0,j = SIZE - 1; i <= j; i++, j--)
    {
        tmp = ar[i];
        ar[i] = ar[j];
        ar[j] =tmp;    
    }

    for (int i = 0; i< SIZE; i++)
    {
        printf("%lf ", ar[i]);
    }
    printf("\n");
}