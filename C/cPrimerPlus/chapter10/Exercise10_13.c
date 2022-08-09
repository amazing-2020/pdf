#include <stdio.h>
void storage(int i, int j, double (*array)[5], double num);
double averageLine(double (*array)[5], int i);
double averageALL(double (*array)[5]);
double maxNUM(double (*array)[5]);
void print(double (*array)[5]);

int main(void)
{
    double array[3][5], num;
    int i, j;

    printf("Please enter a array 3x5 : ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%lf", &num);
            storage(i, j, array, num);
        }
        printf("Next five one! \n");
    }
    printf("Ok!");

    print(array);
    printf("The average of this array %0.2lf \n", averageALL(array));
    printf("The max number of this: %0.2lf \n", maxNUM(array));

    return 0;
}

void storage(int i, int j, double (*array)[5], double num)
{
    array[i][j] = num;
}

double averageLine(double (*array)[5], int i)
{
    double average = 0;
    for (int j = 0; j < 5; j++)
        average += array[i][j];
    return average / 5;
}

double averageALL(double (*array)[5])
{
    int i, j;
    double total = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            total += array[i][j];
    return total / 15.0;
}

double maxNUM(double (*array)[5])
{
    double max = array[0][0];

    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            if (max < array[i][j])
                max = array[i][j];

    return max;        
}

void print(double (*array)[5])
{
    printf("The average of each line: \n");
    for (int i = 0; i < 3; i++)
        printf("The line %d = %0.2lf \n", i, averageLine(array, i));
}