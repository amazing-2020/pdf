#include <stdio.h>

struct Books
{
    char title[50];
    char auther[50];
    char subject[100];
    int book_id;
} book = {"C语言", "GCC", "Clang", 123456};

int main()
{
    printf(" title: %s \n auther: %s \n subject: %s \n book_id: %d \n", book.title, book.auther, book.subject, book.book_id);
    return 0;
}
