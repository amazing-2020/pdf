#include <stdio.h>
#define MONTHS 12
#define YEARS 5
float RAIN(int month, int year, const float arr[5][12], char ch);
void everyYear();
void everyMonth();
const float rainfall[YEARS][MONTHS] =
{
    {64, 40, 57, 70, 68, 23, 4, 83, 1, 71, 95, 96},
    {30, 85, 44, 28, 77, 90, 0, 49, 39, 12, 48, 99},
    {86, 56, 58, 75, 63, 93, 27, 41, 50, 87, 65, 74},
    {66, 19, 32, 45, 61, 62, 18, 53, 36, 8, 29, 46},
    {0, 22, 33, 8, 26, 41, 9, 16, 30, 35, 5, 30}
};

int main(void)
{
    everyYear();
    everyMonth();
    
    return 0;
}

float RAIN(int month, int year, const float arr[5][12], char ch)
{
    float subot;
    int i;

    if (ch == 'm')
        for (i = 0, subot = 0; i < month; i++)
            subot += arr[year][i];
    if (ch == 'y')
        for (i = 0, subot = 0; i < year; i++)
            subot += arr[i][month];

    return subot;
}

void everyYear()
{    
    float total = 0, subot = 0;

    printf(" YEAR         RAINFALL(inches) \n");
    for (int year = 0; year < YEARS; year++)
    {   
        subot = RAIN(MONTHS, year, rainfall, 'm');
        total += subot;
        printf("%5d %15.1f \n", 2010 + year, subot);
        subot = 0;
    }
    printf("\nThe yearly average is %.1f inches. \n\n", total / YEARS);
}

void everyMonth()
{
    float subot;

    printf("MONTHLY AVERAGE: \n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec \n");

    for (int month = 0; month < MONTHS; month++)
    {
        subot = RAIN(month, YEARS, rainfall, 'y');
        printf("%4.1f ", subot / YEARS);
        subot = 0;
    }
    printf("\n");
}