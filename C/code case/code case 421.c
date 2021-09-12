#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}L;

L *creat_node(int data);
void print_list(L *pH);
void tail_insert(L *pH, L *new);
void trave_list(L *pH);
void top_insert(L *pH, L *new);

int main()
{
    int i, n, j;

    L *head = creat_node(0);
    printf("Input the length of the linking table. \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("The value of the %d element: ", i);
        scanf("%d", &j);
        tail_insert(head, creat_node(j));
    }
    printf("******************* \n");
    printf("The linked list you created: \n");
    print_list(head);
    trave_list(head);
    printf("******************* \n");
    printf("The reversed node list: \n");
    print_list(head);

    return 0;
}

L *creat_node(int data)
{
    L *p = malloc(sizeof(L));
    
    if (p == NULL)
    {
        printf("malloc error! \n");
        return NULL;
    }
    memset(p, 0, sizeof(L));
    p->data = data;
    p->next = NULL;
    return p;
}

void print_list(L *pH)
{
    L *p = pH;
    
    while (p->next != NULL)
    {
        p = p->next;
        printf("data = %d \n", p->data);
    }
}

void tail_insert(L *pH, L *new)
{
    L *p = pH;

    while (p -> next != NULL)
        p = p -> next;
    p -> next = new;
}

void trave_list(L *pH)
{
    L *p = pH -> next;
    L *pBack;

    while (p -> next != NULL)
    {
        pBack = p -> next;
        if (pH -> next == p)
            p -> next = NULL;
        else
            p -> next = pH -> next;
        pH -> next = p;
        p = pBack;
    }
    top_insert(pH, p);
}

void top_insert(L *pH, L *new)
{
    //L *p = pH;
    new -> next = pH -> next;
    pH -> next = new;
}