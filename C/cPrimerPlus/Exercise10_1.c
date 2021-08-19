#include <stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
        {64, 40, 57, 70, 68, 23, 4, 83, 1, 71, 95, 96},
        {30, 85, 44, 28, 77, 90, 0, 49, 39, 12, 48, 99},
        {86, 56, 58, 75, 63, 93, 27, 41, 50, 87, 65, 74},
        {66, 19, 32, 45, 61, 62, 18, 53, 36, 8, 29, 46},
        {0, 22, 33, 8, 26, 41, 9, 16, 30, 35, 5, 30}
    };
    int year, month;
    float subot, total;

    printf(" YEAR   RAINFALL   (inches) \n");
    for (year = 0, total = 0; year < YEARS; year++)
    {
        for (month = 0, subot = 0; month < MONTHS; month++)
            subot += *(*(rain + year) + month);
        printf("%5d %15.1f \n", 2010 + year, subot);
        total += subot;
    }
    printf("\nThe yearly average is %.1f inches. \n\n", total / YEARS);
    
    printf("MONTHLY AVERAGE: \n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec \n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subot = 0; year < YEARS; year++)
            subot += *(*(rain + year) + month);
        printf("%4.1f ", subot / YEARS);
    }
    printf("\n");

    return 0;
}