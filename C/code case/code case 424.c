#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreateList(int n);
void PrintList(LinkList h);
void ReverseList(LinkList h);

int main()
{
    LinkList Head = NULL;
    int n;

    scanf("%d", &n);
    Head = CreateList(n);

    printf("The value of the linklist is: \n");
    PrintList(Head);
    printf("\n\n");
    printf("reverse list: \n");
    ReverseList(Head);
    PrintList(Head);
    printf("\n");
    
    return 0;
}

LinkList CreateList(int n)
{
    LinkList L, p, q;
    int i;

    L = (LNode *)malloc(sizeof(LNode));
    if (!L) return 0;
    L -> next = NULL;
    q = L;
    for (i = 0; i <= n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        p -> data = i;
        p -> next = NULL;
        q -> next = p;
        q = p;
    }

    return L;
}

void PrintList(LinkList h)
{
    LinkList p = h -> next;
    while (p != NULL)
    {
        printf("%d ", p -> data);
        p = p -> next;
    }
}

void ReverseList(LinkList h)
{
    LinkList pre = NULL;
    LinkList cur = h -> next;
    LinkList temp;

    while (cur)
    {
        temp = cur -> next;
        cur -> next = pre;
        pre = cur;
        cur = temp;
    }
    h -> next = pre;
}