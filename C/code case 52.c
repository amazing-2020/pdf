#include <stdio.h>
#include <stdlib.h>

typedef struct Link
{
    int elem;
    struct Link *next;
} link;

link * initLink();
void display(link *p);

int main()
{
    link * p = NULL;
    printf("初始化链表:\n");
    p = initLink();
    display(p);

    return 0;
}

link * initLink() 
{
    int i;
    link * p = NULL;
    link * temp = (link *)malloc(sizeof(link));

    temp->elem = 1;
    temp->next = NULL;
    p = temp;
    for (i = 2; i<5; i++)
    {
        link * a = (link *)malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }

    return p;
}

void display(link *p)
{
    link* temp = p;
    while(temp)
    {
        printf("%d ", temp->elem);
        temp = temp->next;
    }

    printf("\n");
}