#include <stdio.h>
#include <stdbool.h>

long get_long(void);
bool bad_limits(long begin, long end, long low, long high);
double sum_squres(long a, long b);
int main(void)
{
    const long MIN = -10000000L;
    const long MAX = +10000000L;
    long start;
    long stop;
    double answer;

    printf("This program computes the sum of the squres of integers in a range. \n"
    "The lower bound should not be less than -10000000 and upper bound should not be more than +10000000. \n"
    "Enter the limits (enter 0 for both limits to quit): \n");
    printf("lower limit: ");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("Please try an=gain. \n");
        else
        {
            answer = sum_squres(start, stop);
            printf("The sum of the squres of the integers from %ld to %ld is %g. \n", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both limits to quit): \n");
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }
    printf("Done! \n");

    return 0;
}

long get_long(void)
{
    long input;
    char ch;

    while (scanf("%ld", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not an integer. \n");
        printf("Please enter an integer value, such as 25, -178, or 3: ");
    }

    return input;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("%ld isn't smaller than %ld. \n", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("Value must be %ld or greater. \n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("Value must be %ld or less. \n", high);
        not_good = true;
    }
    return not_good;
}

double sum_squres(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i <= b; i++)
        total += (double)i * (double)i;
    return total;
}