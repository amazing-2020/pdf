#include <stdio.h>
#include <stdlib.h>
//链表中节点的结构
typedef struct Link
{
    int elem;
    struct Link *next;
} link;
//初始化链表的函数
link * initLink();
//用于输出链表的函数
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
    link * p = NULL;//创建头指针
    link * temp = (link *)malloc(sizeof(link));//创建首元结点

    temp->elem = 1;
    temp->next = NULL;
    p = temp;//头指针指向首元结点
    for (i = 2; i<5; i++)
    {
        //创建一个新节点并初始化
        link * a = (link *)malloc(sizeof(link));
        a->elem = i;
        a->next = NULL;
        //将temp节点与新建立的a节点建立逻辑关系
        temp->next = a;
        //指针temp每次都只指向新链表的最后一个节点,其实就是a节点,这里写temp=a也对
        temp = temp->next;
    }
    //返回建立的新节点,只返回头指针p即可,通过头指针可以找到整个链表
    return p;
}

void display(link *p)
{
    link* temp = p;//将temp指针重新指向头结点
    //只要temp指针指向的结点的next不是null,就执行输出语句
    while(temp)
    {
        printf("%d ", temp->elem);
        temp = temp->next;
    }

    printf("\n");
}