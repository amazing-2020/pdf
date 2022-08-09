#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void numsort(int arr[100]);
int main(void)
{
  int num[SIZE];

  srand((unsigned int) time(0));
  for (int i = 0; i < 100; ++i) 
    num[i] = rand() % 10 + 1;
  numsort(num);
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%3d ", num[i]);
    if ((i+1) % 10 == 0)
      printf("\n");
  }
  printf("\n");

  return 0;
}

void numsort(int arr[100])
{
  int temp;

  for (int i = 0; i < SIZE - 1; ++i) {
    for (int j = i+1; j < SIZE; ++j) {
      if (arr[i] < arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}