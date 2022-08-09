#include <stdio.h>
#define Seconds_per_day 3.156e7
#define Mass_per_water_molecule 3.0e-23
#define Quality_per_quart_water 950

void Inches_to_Centimeters();

int main(void)
{
    int age;
    double quarts;

    printf("Please enter the years: ");
    scanf("%d", &age);
    printf("%d years = %e seconds \n", age, age*Seconds_per_day);

    printf("Please enter the quart of water: ");
    scanf("%lf", &quarts);
    printf("The quality of %lf quarts water is %eg, and there are %e water molecules here. \n", 
    quarts, quarts*Quality_per_quart_water, quarts*Quality_per_quart_water/Mass_per_water_molecule);
    
    Inches_to_Centimeters();

    return 0;
}

void Inches_to_Centimeters()
{
    float inches;

    printf("Please enter the inches: ");
    scanf("%f", &inches);
    printf("%f inches = %f cm", inches, inches*2.54);
}