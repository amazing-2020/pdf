#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100

void random_show(const int *, const int, const int);
int mycomp(const void * p1, const void * p2);
void check_same(unsigned int *, int, int);

int main(void)
{
  int arr[SIZE];
  int num;

  srand((unsigned)time(0));
  for (int i = 0; i < SIZE; ++i)
    arr[i] = rand() % 1000 + 1;
  printf("How many item do you want to show(q to quit)?\n");
  while (scanf("%d", &num) == 1)
  {
    random_show(arr, sizeof(arr) / sizeof(int), num);
    printf("How many item do you want to show(q to quit)?\n");
  }
  puts("Bye!");

  return 0;
}

void random_show(const int * arr, const int size, const int n)
{
  unsigned int sign[size];

  for (int i = 0; i < n; ++i)
    sign[i] = ((unsigned)rand()) % size;
  qsort(sign, n, sizeof(int), mycomp);
  check_same(sign, n, size);
  for (int i = 0; i < n; ++i) {
    printf("%d ", arr[sign[i]]);
    if ((i+1) % 10 == 0)
      putchar('\n');
  }
}

void check_same(unsigned int * arr, int n, int size)
{
  /*
   * Every the same element is found, it is changed and the array is reordered
   * and searched from the beginning
   */
  for (int i = 0; i < n - 1; ++i)
    for (int j = i + 1; j < n; ++j)
      while (arr[i] == arr[j])
      {
        arr[i] = (unsigned)rand() % size;
        qsort(arr, n, sizeof(int), mycomp);
        i = 0;
      }
}

int mycomp(const void * p1, const void * p2)
{
  const int *s1 = (int *)p1;
  const int *s2 = (int *)p2;

  if (*s1 < *s2)
    return -1;
  else if (*s1 > *s2)
    return 1;
  else
    return 0;
}