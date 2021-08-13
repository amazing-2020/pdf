#include <stdio.h>
#include <string.h>

struct Books
{
    char title[100];
    char auther[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book);

int main()
{
    struct Books Book1;
    struct Books Book2;

    strcpy(Book1.title, "Code");
    strcpy(Book1.auther, "we");
    strcpy(Book1.subject, "Math");
    Book1.book_id = 123456;

    strcpy(Book2.title, "python");
    strcpy(Book2.auther, "Buif");
    strcpy(Book2.subject, "computer");
    Book2.book_id = 456123;

    printBook(Book1);

    printBook(Book2);

    return 0;
}

void printBook(struct Books book)
{
    printf("Book title : %s \n", book.title);
    printf("Book auther: %s \n", book.auther);
    printf("Book subject: %s \n", book.subject);
    printf("Book ID: %d \n", book.book_id);
}