#include <stdio.h>
#include <string.h>

typedef struct LNode
{
    int data[5];
    int status;
    struct LNode *next;
}LNode, *LinkList;

typedef struct LList
{
    LNode LNode[10];
    LinkList read;
    LinkList write;
}LList_Example;

void read_task(LList_Example *lle)
{
    if (lle -> write -> status == 1)
    {
        printf("read data: %d \r\n", lle -> read -> data[0]);
        lle -> read -> status = 0;
        lle -> read = lle -> read -> next;
    }
    else
    {
        printf("read has catch up with write\r\n");
    }
}

void write_task(LList_Example *lle)
{
    static int i;
    if (lle -> write -> status == 0)
    {
        lle -> write -> data[0] = i;
        lle -> write -> status = 1;
        i++;
        printf("write data: %d \r\n", lle -> write -> data[0]);
        lle -> write = lle -> write -> next;
    }
    else
    {
        printf("write has catch up with read\r\n");
    }
}

int main()
{
    int i, j;
    LList_Example le_0;
    memset(&le_0, 0x00, sizeof(le_0));
    for (i = 0; i < 9; i++)
        le_0.LNode[i].next = &le_0.LNode[i+1];
    le_0.LNode[i].next = &le_0.LNode[0];
    le_0.write = &le_0.LNode[0];
    le_0.read = &le_0.LNode[0];
    for (i = 0; i < 5; i++)
    {
        le_0.write -> data[0] = i;
        le_0.write -> status = 1;
        le_0.write = le_0.write -> next;
        printf("write data: %d \r\n", le_0.LNode[i].data[0]);
    }

    for (i = 0; i < 22; i++)
    {
        for (j = 0; j < 10; j++)
            printf("%d : %d, ", j, le_0.LNode[j].status);
        printf("\r\n");
        read_task(&le_0);
        write_task(&le_0);
    }   

    return 0;
}// don't understand