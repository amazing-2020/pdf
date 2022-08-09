#include <stdio.h>
#include <string.h>
char * s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31
#define MAXBKS 100

struct book {
  char title[MAXTITL];
  char author[MAXAUTL];
  float value;
};

void sortByValue(struct book **, int);
void sortByName(struct book **, int);
void output(int n ,struct book *AListOfBook);
void output_PT(int n, struct book * *AListOfBook);
void quick_sort(struct book ** Element, int start, int end);

int main(void)
{
  struct book Library[MAXBKS];
  int count = 0;
  struct book * value_pt[MAXBKS], * name_pt[MAXBKS];

  printf("Please enter the book title.\n");
  printf("Press the [Enter] at the start of a line to stop.\n");
  while (count < MAXBKS && s_gets(Library[count].title, MAXTITL) != NULL
         && Library[count].title[0] != '\0')
  {
    printf("Now Enter the author.\n");
    s_gets(Library[count].author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &Library[count].value);
    while (getchar() != '\n')
      continue;
    value_pt[count] = &Library[count];
    name_pt[count] = &Library[count];
    if (count < MAXBKS)
      printf("Enter the next title.\n");
    count++;
  }
  printf("%d\n", count);
  if (count > 0)
  {
    printf("Here is the list of your books:\n");
    output(count, Library);
    printf("Here is the sorted(Value) data: \n");
    sortByValue(value_pt, count);
    output_PT(count, value_pt);
    printf("Here is the sorted(Name) data: \n");
    sortByName(name_pt, count);
    output_PT(count, name_pt);
  }
  else
    printf("No books? Too bad.\n");

  return 0;
}

void sortByValue(struct book * *valueArr, int quantity)
{
  quick_sort(valueArr, 0, quantity - 1);
}
/*
 * Sort pointers to structures
 */
void quick_sort(struct book * *Element, int start, int end)
{
  struct book * tmp = NULL;
  if (start > end)
    return;
  tmp = Element[start];
  int i = start;
  int j = end;

  while (i != j)
  {
    while (Element[j]->value >= tmp->value && j > i)
      j--;
    while (Element[i]->value <= tmp->value && j > i)
      i++;
    /*
     * swap the value at the two sides of tmp->value
     */
    if (j > i)
    {
      struct book *pointer = Element[i];
      Element[i] = Element[j];
      Element[j] = pointer;
    }
  }
  Element[start] = Element[i];
  Element[i] = tmp;
  quick_sort(Element, start, i-1);
  quick_sort(Element, i + 1, end);
}

void sortByName(struct book * *nameArr, int quantity)
{
  struct book *tmp;

  for (int i = 0; i < quantity - 1; ++i)
  {
    for (int j = 0; j < quantity - i - 1; ++j)
    {
      /*
       * if the ascii value is lower, it's index will be lower
       */
      if (strcmp(nameArr[j]->title, nameArr[j+1]->title) > 0)
      {
        tmp = nameArr[j];
        nameArr[j] = nameArr[j+1];
        nameArr[j+1] = tmp;
      }
    }
  }
}

void output(int n, struct book *AListOfBook)
{
  int index = 0;

  for (index = 0; index < n; ++index)
    printf("%s by %s: $%.2f\n",
           AListOfBook[index].title, AListOfBook[index].author, AListOfBook[index].value);
}

void output_PT(int n, struct book * *AListOfBook)
{
  int index = 0;

  for (index = 0; index < n; ++index)
    printf("%s by %s: $%.2f\n",
           (AListOfBook[index])->title, (AListOfBook[index])->author, (AListOfBook[index])->value);
}

char * s_gets(char *st, int n)
{
  char *ret_val;
  char *find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}