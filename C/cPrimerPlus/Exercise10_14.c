#include <stdio.h>
void storage(int i, int j, double array[i][j]);
double averageLine(int i, int j, double array[i][j], int n);
double averageALL(int i, int j, double array[i][j]);
double maxNUM(int i, int j, double array[i][j]);
void print(int i, int j, double array[i][j]);
int main(void)
{
    double array[3][5], num;

    storage(3, 5, array);
    print(3, 5, array);
    printf("The average of this array %0.2lf \n", averageALL(3, 5, array));
    printf("The max number of this: %0.2lf \n", maxNUM(3, 5, array));
    
    return 0;
}

void storage(int i, int j, double array[i][j])
{
    double num;
    int r, t;

    printf("Please enter a array 3x5 : ");
    for (r = 0; r < i; r++)
    {
        for (t = 0; t < j; t++)
        {
            scanf("%lf", &num);
            array[r][t] = num;
        }
        printf("Next five one! \n");
    }
    printf("Ok!");
}

double averageLine(int i, int j, double array[i][j], int n)
{
    double average = 0;
    
    for (int t = 0; t < j; t++)
        average += array[n][t];
    
    return average / 5;
}

double averageALL(int i, int j, double array[i][j])
{
    double total = 0;
    int r, t;

    for (r = 0; r < i; r++)
        for (t = 0; t < j; t++)
            total += array[r][t];
    return total / 15.0;
}

double maxNUM(int i, int j, double array[i][j])
{
    double max = array[0][0];

    int r, t;
    for (r = 0; r < i; r++)
        for (t = 0; t < j; t++)
            if (max < array[r][t])
                max = array[r][t];  
    return max;        
}

void print(int i, int j, double array[i][j])
{
    printf("The average of each line: \n");
    for (int j = 0; j < 3; j++)
        printf("The line %d = %0.2lf \n", i, averageLine(3, 5, array, j));
}