#include <stdio.h>

struct student
{
    int age;
    char c;
} a;
struct student f(struct student);
void f2(struct student *);

int main(int argc, char const *argv[])
{
    a.age = 3;
    a.c = 'A';
    a = f(a);
    printf("%d,%c \n", a.age, a.c);
    f2(&a);
    printf("next: %d,%c \n", a.age, a.c);

    return 0;
}

struct student f(struct student b)
{
    b.age = 20;
    b.c = 'a';

    return b;
}

void f2(struct student *b)
{
    b->age = 3;
    b->c = 'A';
}