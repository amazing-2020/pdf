#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct names {
  char first[40];
  char last[40];
};

void show_names(const struct names *, int);
int mycomp(const void * p1, const void * p2);

int main(void)
{
  struct names vals[10] = {
      {"Liam", "Olivia"},
      {"Noah", "Emma"},
      {"Oliver", "Charlotte"},
      {"Elijah", "Amelia"},
      {"James", "Ava"},
      {"William","Sophia"},
      {"Benjamin", "Isabella"},
      {"Lucas", "Mia"},
      {"Henry", "Evelyn"},
      {"Theodore", "Harper"}
  };

  puts("Original list: ");
  show_names(vals, 10);
  qsort(vals, 10, sizeof(struct names), mycomp);
  puts("\nSorted list: ");
  show_names(vals, 10);

  return 0;
}


void show_names(const struct names * arr, int n)
{
  for (int i = 0; i < n; ++i)
    printf("%s %s\n", arr[i].first, arr[i].last);
}

int mycomp(const void * p1, const void * p2)
{
  const struct names * a1 = (const struct names *)p1;
  const struct names * a2 = (const struct names *)p2;
  int res;
  res = strcmp(a1->last, a2->last);
  if (res != 0)
    return res;
  else
    return strcmp(a1->first, a1->first);
}