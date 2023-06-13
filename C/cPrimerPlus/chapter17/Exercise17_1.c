#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TSIZE 45
#define FMAX 5

struct film {
  char title[TSIZE];
  int rating;
  struct film * next;
  struct film * last; //add
};

char * s_gets(char * st, int n);
void show_film_reverse(const struct film * pf); //add

int main(void)
{
  struct film * head = NULL, * last = NULL; //add
  struct film * prev, * current;
  char input[TSIZE];

  puts("Enter first movie title:");
  while (s_gets(input, TSIZE) != NULL && input[0] != '\0')
  {
    current = (struct film *)malloc(sizeof(struct film));
    if (head == NULL)
    {
      head = current;
      head->last = NULL; //add
    }
    else
    {
      prev->next = current;
      current->last = prev; //add
    }
    current->next = NULL;
    strcpy(current->title, input);
    puts("Enter your rating <0-10>:");
    scanf("%d", &current->rating);
    while (getchar() != '\n')
      continue;
    puts("Enter next movie title, (Empty line to quit)");
    prev = current;
    last = current; //add
  }
  if (head == NULL)
    printf("No data entered. ");
  else
    printf("Here is the movie list:\n");
  current = head;
  while (current != NULL)
  {
    printf("Movie: %s  Rating: %d\n", current->title, current->rating);
    current = current->next;
  }
  /*
   * add start
   */
  current = last;
  while (current != NULL)
  {
    printf("Movie: %s  Rating: %d\n", current->title, current->rating);
    current = current->last;
  }
  /*
   * end
   */
  current = head;
  show_film_reverse(current); //add
  while (current != NULL)
  {
    head = current->next;
    free(current);
    current = head;
  }
  printf("Bye!\n");

  return 0;
}
/*
 * add start
 */
void show_film_reverse(const struct film * pf)
{
  const struct film * now = pf;
  if (now->next != NULL)
    show_film_reverse(now->next);
  printf("Movie: %s  Rating: %d\n", now->title, now->rating);
}
/*
 * add end
 */
char * s_gets(char * st, int n)
{
  char * ret;
  char * find;

  ret = fgets(st, n, stdin);
  if (ret)
  {
    find = strchr( st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret;
}