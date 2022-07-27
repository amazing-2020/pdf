#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PR(X) printf("name: " #X "; value: %d; address: %p\n", X, &X)
#define PR_DATE
#define MYBOOL(X) _Generic((X), \
 _Bool: "boolean", \
 default: "not boolean"\
)

int mycomp(const void * p1, const void * p2);

int main(void)
{
  int a = 999;
  PR(a);

#ifdef PR_DATE
  printf("%s\n", __DATE__);
#endif

  _Bool b;
  printf("%s\n", MYBOOL(b));

  time_t t;
  srand((unsigned)time(&t));
  const int size = 1000;
  int arr[size];
  for (int i = 0; i < size; ++i)
    arr[i] = rand() % 1000;
  qsort(arr, size, sizeof(int), mycomp);
  for (int i = 0; i < size; ++i) {
    printf("%4d ", arr[i]);
    if ((i+1) % 10 == 0)
      putchar('\n');
  }

  double array1[100];
  double array2[300];

  for (int i = 0; i < 300; ++i)
    array2[i] = (double)RAND_MAX / (double)rand();
  memcpy(array1, array2, 100 * sizeof(double));
  for (int i = 0; i < 100; ++i) {
    printf("%lf ", array1[i]);
  if ((i+1) % 10 == 0)
    putchar('\n');
  }
  putchar('\n');
  memcpy(array1, array2+200, 100 * sizeof(double));
  for (int i = 0; i < 100; ++i) {
    printf("%lf ", array1[i]);
    if ((i+1) % 10 == 0)
      putchar('\n');
  }
  return 0;
}

int mycomp(const void * p1, const void * p2)
{
  const int *s1 = (int *)p1;
  const int *s2 = (int *)p2;

  if (*s1 < *s2)
    return 1;
  else if (*s1 > *s2)
    return -1;
  else
    return 0;
}