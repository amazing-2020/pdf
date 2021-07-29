#include <stdio.h>
#include <math.h>
void truth();
void trouble();

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi? \n");
    scanf("%lf", &response);
    while ( fabs(response - ANSWER) > 0.0001)
    {
        printf("Try anain! \n");
        scanf("%lf", &response);
    }
    printf("Close enough! \n");
    
    truth();

    trouble();

    return 0;
}

void truth()
{
    int n = 3;

    while (n)
        printf("%2d is true \n", n--);
    printf("%2d is false", n);

    n = -3;
    while (n)
        printf("%2d is true. \n", n++);
    printf("%2d is false \n", n);    
}

void trouble()
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be assumed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers su to %ld. \n", sum);
}