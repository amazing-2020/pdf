#include <stdio.h>
#include <string.h>
struct fullname {
  char fname[20];
  char lname[20];
};
struct bard {
  struct fullname name;
  int born;
  int died;
};
struct bard willie;
struct bard *pt = &willie;

void question_a();
void question_b();
void question_c();
void question_d();
void question_e();
void question_f();
void question_g();
void question_h();
void rm_Line();

int main(void)
{
  question_a();
  question_b();
  question_c();
  question_d();
  question_e();
  question_f();
  question_g();
  question_h();

  return 0;
}

void question_a()
{
  willie.born = 1999;
  willie.died = 2099;
  strcpy(willie.name.fname, "Mike");
  strcpy(willie.name.lname, "Wu");
  printf("%7s %7s born in %d died in %d.\n", willie.name.fname, willie.name.lname, willie.born, willie.died);
}

void question_b()
{
  pt->born = 1989;
  pt->died = 2099;
  strncpy(pt->name.fname, "GCC", 20);
  strncpy(pt->name.lname, "GNU", 20);
  printf("%7s %7s born in %d died in %d.\n", pt->name.fname, pt->name.lname, pt->born, pt->died);
}

void question_c()
{
  printf("Enter the born year: ");
  scanf("%d", &(willie.born));
  printf("Born in: %d\n", willie.born);
  rm_Line();
}

void question_d()
{
  printf("Enter the born year: ");
  scanf("%d", &(pt->born));
  printf("Born in:%d\n", pt->born);
  rm_Line();
}

void question_e()
{
  puts("Enter the last name: ");
  scanf("%s", willie.name.lname);
  printf("The last name is:%s\n", pt->name.lname);
  rm_Line();
}

void question_f()
{
  puts("Enter the last name: ");
  scanf("%s", pt->name.lname);
  printf("The last name is:%s\n", pt->name.lname);
  rm_Line();
}

void question_g()
{
  char ch = willie.name.fname[2];
  printf("The third letter is %c.\n", ch);
}

void question_h()
{
  int length = strlen(willie.name.fname) + strlen(willie.name.lname);
  printf("The name length is:%d.\n", length);
}

void rm_Line()
{
  while (getchar() != '\n')
    continue;
}