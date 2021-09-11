#include <stdlib.h>
#include <stdio.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode, *LinkList;

LinkList CreateList(int n);
void print(LinkList h);
int main()
{
    LinkList Head = NULL;
    int n;

    scanf("%d", &n);
    Head = CreateList(n);

    printf("The linked list you created: \n");
    Head = Head -> next;
    print(Head);

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
    for (i = 1; i <= n; i++)
    {
        p = (LinkList)malloc(sizeof(LNode));
        printf("The value of the %dth element: ", i);
        scanf("%d", &(p->data));
        p -> next = NULL;
        q -> next = p;
        q = p;
    }

    return L;
}

void print(LinkList h)
{
    if (h == NULL)
        return;
    else
    {
        print(h -> next);
        printf("%d ", h -> data);
    }
}