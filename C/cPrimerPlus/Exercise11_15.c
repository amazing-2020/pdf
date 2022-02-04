#include "stdio.h"
#include "getinput.h"
#include "ctype.h"
#include "math.h"
#define SIZE 100
int main(void)
{
  char str[SIZE];
  int number[SIZE] = {0}, size = 0, num = 0;

  printf("Enter some number: ");
  s_gets(str, SIZE);
  while (str[size] != '\0')
  {
    if (!isdigit(*str))
    {
      printf("Errors! Just enter numbers!");
      break;
    }
    number[size] = str[size] - 48;
    size++;
  }
  for (int i = 0; i < size; ++i)
    num += (int)pow(10, size - i - 1) * number[i];
  printf("%d \n", num);

  return 0;
}