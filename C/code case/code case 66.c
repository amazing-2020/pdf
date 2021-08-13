#include <stdio.h>
#include <string.h>

typedef struct Books
{
    char title[50];
    char auther[50];
    char sybject[100];
    int book_id;
} Book;

int main()
{
    Book book;

    strcpy( book.title, "C");
    strcpy( book.auther, "RUNOOB");
    strcpy( book.sybject, "computer");
    book.book_id = 12345;

    printf(" title: %s, auther: %s , subject: %s, %d \n", book.title, book.auther, book.sybject, book.book_id);

    return 0;
}
