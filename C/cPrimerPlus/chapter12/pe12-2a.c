// Compile with Exercise12_2.c
#include <stdio.h>
#include "pe12-2a.h"
static int theMode;
static float energy_consumption;
void set_mode(int mode)
{
  if (mode > 1)
    printf("Invalid mode specified, Mode 1(US) used. \n");
  theMode = mode;
}

void get_info()
{
  float oil, length;

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
}

void show_info()
{
  if (!theMode)
    printf("Fuel consumption is %.2f liters per 100 km. \n", energy_consumption);
  else
    printf("Fuel consumption is %.1f miles per gallon. \n", energy_consumption);
}