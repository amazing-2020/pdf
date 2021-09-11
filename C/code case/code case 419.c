#include <stdio.h>
#include <stdlib.h>

typedef struct LNode {
    int data;
    struct LNode *next; //the next
    struct LNode *prior; //the last
}LNode, *LinkList;

LinkList CreateList(int n);
void print(LinkList p, int x);

int main()
{
    LinkList Head = NULL;
    int n;

    printf("Input the length of the linking table. \n");
    scanf("%d", &n);
    Head = CreateList(n);
    printf("The value of the linked table: \n");
    print(Head, n);

    return 0;
}

LinkList CreateList(int n)
{
    LinkList L, p, q;
    int i;

    L = (LNode *)malloc(sizeof(LNode));
    if (!L)
        return 0;
    for (i = 1; i <= n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        printf("Input %dth value: ", i);
        scanf("%d", &(p->data));
        if (i == 1)
        {
            p -> next = NULL;
            p -> prior = NULL;
            L = p;
            q = p;
        } else {
            p -> next = NULL;
            p -> prior = q;
            q -> next = p;
            q = p;
        }
        //link the last node with the first node
        if (i == n)
        {
            L -> prior = q;
            q -> next = L;
        }
    }

    return q;
}

void print(LinkList p, int x)
{
    int i = 1;

    while (i <= x)
    {
        printf("%d ", i);
        if (p -> prior != NULL)
            printf("prior = %d \n", p -> next -> data);
        p = p -> next;
        i++;
    }
}