#include "stdio.h"
#include "math.h"
#define SIZE 100

int main(int argc, char *argv[])
{
  double number1 = 0.0;
  int number2 = 0;
  int double_number[SIZE] = {0}, digit[SIZE] = {0};

  /*
   * 另一种写法
  int i = 0, beforeThePoint = 0, j = 0;
  while (argv[1][i] != '\0')
  {
    if (argv[1][i] == '.')
    {
      beforeThePoint = j;
      i++;
      continue;
    }
    double_number[j] = argv[1][i]-48;
    printf("%c \t", argv[1][i]);
    i++;
    j++;
  }*/

  int beforeThePoint = 0, j=0, lengthOfFloatingPointNumber = 0;
  for (int i = 0; argv[1][i] !=  '\0'; ++i, ++j)
  {
    if (argv[1][i] == '.')
    {
      beforeThePoint = j;
      j--;
      continue; //仍会执行第二个分号后面的语句
    }
    double_number[j] = argv[1][i]-48;
  }
  lengthOfFloatingPointNumber = j;
  for (int i = 0; i < lengthOfFloatingPointNumber; ++i)
    if (beforeThePoint != 0)
      number1 += pow(10, beforeThePoint-i-1) * double_number[i];
    else
      number1 += pow(10, lengthOfFloatingPointNumber-i-1) * double_number[i];

  int k=0, lengthOfTheDigit = 0;
  for (int i = 0; argv[2][i] != '\0' ; ++i, k++)
    digit[k] = argv[2][i] - 48;
  lengthOfTheDigit = k;
  for (int i = 0; i < lengthOfTheDigit; ++i)
    number2 += (int)pow(10, lengthOfTheDigit - i - 1) * digit[i];

  printf("%lf ^ %d = %lf \n", number1, number2, pow(number1, number2));

  return 0;
}