#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
}L;

L *creat_node(int data);
void print_list(L *pH);
void tail_insert(L *pH, L *new);

int main()
{
    int i, n, j;
    L *head = creat_node(0);
    
    printf("Please enter the number of the node you want to creat: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("The value of the %d element: ", i);
        scanf("%d", &j);
        tail_insert(head, creat_node(j));
    }
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
    printf("******************* \n");
    printf("The linked list you created: \n");
    while (p->next != NULL)
    {
        p = p->next;
        printf("data = %d \n", p->data);
    }
}

void tail_insert(L *pH, L *new)
{
    L *p = pH;
    while (p->next != NULL)
    {
        p = p -> next;
    }
    p -> next = new;
}