#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char auther[20];
    char subject[20];
    int book_id;
};

void printBook(struct Books *book);

int main()
{
    struct Books Book1;
    struct Books Book2; //声明Book2，类型为Books

    strcpy(Book1.title, "clean code");
    strcpy(Book1.auther, "Martin");
    strcpy(Book1.subject, "Computer");
    Book1.book_id = 4685213;

    strcpy(Book2.title, "Computer science");
    strcpy(Book2.auther, "tesla");
    strcpy(Book2.subject, "Computer Science");
    Book2.book_id = 7899513;

    printBook(&Book1);

    printBook(&Book2);
    
    return 0;
}

void printBook(struct Books * book)
{
    printf("Book title: %s \n", book->title);
    printf("Book auther: %s \n", book->auther);
    printf("Book subject: %s \n", book->subject);
    printf("Book book_id: %d \n", book->book_id);
    printf("The next book!\n --->");
}