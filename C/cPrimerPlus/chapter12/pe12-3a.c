// Compile with Exercise12_3.c
#include <stdio.h>
#include "pe12-3a.h"
void set_mode(int mode)
{
  if (mode > 1)
    printf("Invalid mode specified, Mode 1(US) used. \n");
}

float get_info(int theMode)
{
  float oil, length, energy_consumption;

  if (!theMode)
  {
    printf("Enter distance traveled in kilometers: ");
    scanf("%f", &length);
    while (getchar() != '\n')
      continue;
    printf("Enter fuel consumed in liters: ");
    scanf("%f", &oil);
    energy_consumption = oil / length * 100;
  } else {
    printf("Enter distance traveled in miles: ");
    scanf("%f", &length);
    while (getchar() != '\n')
      continue;
    printf("Enter fuel consumed in gallons: ");
    scanf("%f", &oil);
    energy_consumption = length / oil;
  }

  return energy_consumption;
}

void show_info(float energy_consumption, int theMode)
{
  if (!theMode)
    printf("Fuel consumption is %.2f liters per 100 km. \n", energy_consumption);
  else
    printf("Fuel consumption is %.1f miles per gallon. \n", energy_consumption);
}