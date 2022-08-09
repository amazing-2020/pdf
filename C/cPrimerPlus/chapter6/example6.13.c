#include <stdio.h>
void zero();

int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf("ounces  cost \n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
        printf("%5d   $%4.2f \n", ounces, cost / 100.0);
    zero();

    return 0;
}

void zero()
{
    int t_ct;
    double time, power_of_2;
    int limit;

    printf("Please enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0 / power_of_2;
        printf("time = %f when terms = %d. \n", time, t_ct);
    }
}