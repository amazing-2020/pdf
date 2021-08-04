#include <stdio.h>
#define COVERAGE 350
void skippart();
int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted: \n");
    while (scanf("%d", &sq_feet) == 1 && sq_feet > 0)
    {
        cans = sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0:1;
        printf("You need %d %s of paint. \n", cans, (cans==1) ? "can":"cans");
    }
    printf("--------------- \n");
    getchar();
    skippart();

    return 0;
}

void skippart()
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MIN;
    float max = MAX;

    printf("Enter the first score (q to quit): ");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is a in valid value. Try gain: ", score);
            continue;
        }
        if (n == 0)
        {
            min = score;
            max = score;
        }
        printf("Accepting %0.1f: \n", score);
        min = (score < min) ? score:min;
        max = (score > max) ? score:max;
        total += score;
        n++;
        printf("Enter next score (q to quit): "); 
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f. \n", n, total / n);
        printf("Low  = %0.1f, high = %0.1f \n", min, max);
    }
    else
        printf("No valid scores were entered! \n");
}