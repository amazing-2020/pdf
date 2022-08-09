#include <stdio.h>
void temperatureConvert(double temperature);
int main(void)
{
    double temp;
    
    printf("Please enter a temperature: ");
    while (scanf("%lf", &temp) == 1)
    {
        temperatureConvert(temp);
        printf("Please enter another value: ");

    }
    
    return 0;
}

void temperatureConvert(double temperature)
{
    const double centigradeToDegreeKelvin = 273.16;
    double centigradeScale = (5.0/9.0)*(temperature - 32.0);
    double degreeKelvin = centigradeScale + centigradeToDegreeKelvin; 

    printf("%lf ℉ = %lf ℃ = %lf K\n", temperature, centigradeScale, degreeKelvin);
}