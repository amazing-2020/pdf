#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 1000

int find_number(int arr[], int n, int number);

int main()
{
  int arr[MAX_SIZE];
  int number;

  srand((unsigned int)time(0));
  for (int i = 0; i < MAX_SIZE; ++i) {
    arr[i] = rand() % 10000 + rand() % (i + 1);
  }
  for (int i = 0; i < MAX_SIZE; ++i) {
    for (int j = i+1; j < MAX_SIZE; ++j) {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  printf("Enter an integer: ");
  scanf("%d", &number);
  if (find_number(arr, MAX_SIZE-1, number))
    printf("%d exists in the array\n", number);
  else
    printf("Not exist\n");

  return 0;
}

int find_number(int arr[], int n, int number)
{
  int bottom = 0, top = n;
  int index;

  while (bottom <= top)
  {
    index = bottom + (top - bottom)/2; //bottom add distance divide two
    if (number > arr[index]) {
      bottom = index+1;
    }
    else if (number < arr[index]) {
      top = index-1;
    }
    else {
      return 1;
    }
  }
  return 0;
}