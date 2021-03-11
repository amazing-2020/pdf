#include <stdio.h>
#include <stdlib.h>
#define Size 4

typedef struct Table
{
    int * head;//声明一个名为head的长度不定的数组, 动态数组
    int length;//记录当前顺序表的长度
    int size;//记录顺序表分配的存储容量
} table;

table initTable()
{
    table t;
    t.head = (int *)malloc(Size*sizeof(int));//构造一个空的顺序表,动态存储空间
    if (!t.head)
    {
        printf("初始化失败");
        exit(0);
    }
    t.length = 0;//空表的长度初始化为0
    t.size = Size;//空表的初始存储空间为Size
    return t;
}

//插入函数,插入elem, add为位置
table addTable(table t, int elem, int add)
{
    //插入的元素位置比整张表的长度还大1,
    //插入的位置不存在
    if (add > t.length+1 || add<1)
    {
        printf("插入位置有问题");
        return t;
    }
    if (t.length>=t.size) 
    {
        //做插入操作时,查看顺序表是否有多余的存储空间提供给插入的元素,没有则申请
        t.head=(int *)realloc(t.head, (t.size+1)*sizeof(int));
        if (!t.head)
        {
            printf("存储分配失败");
        }
        t.size += 1;
    }
    //插入操作,从插入位置开始的后续元素,逐个后移
    for (int i = t.length-1; i>=add-i; i--)
    {
        t.head[i+1] = t.head[i];
    }

    t.head[add-1] = elem;
    //添加了元素,长度+1
    t.length++;
    return t;
}

table delTable(table t, int add)
{
    if (add>t.length || add<1)
    {
        printf("被删除的位置有误");
        exit(0);
    }
    for (int i=add; i<t.length; i++)
    {
        t.head[i-1] = t.head[i];
    }
    t.length --;
    return t;
}

//查找函数,elem表示要查找的数据元素的值
int selectTable(table t, int elem)
{
    for (int i=0; i<t.length; i++)
    {
        if (t.head[i] == elem)
        {
            return i+1;
        }
    }
    return -1;//失败则返回-1
}

//更改函数,elem->newElem
table amendTable(table t,int elem, int newElem)
{
    int add = selectTable(t, elem);
    t.head[add - 1] = newElem;//返回的是元素在顺序表中的位置,-1就是该元素在数组中的下标
    return t;
}

void displayTable(table t)
{
    for (int i=0; i<t.length; i++)
    {
        printf("%d", t.head[i]);
    }
    printf("\n");
}

int main()
{
    table t1=initTable();
    for (int i=1; i<=Size; i++)
    {
        t1.head[i-1] = i;
        t1.length++;
    }
    printf("原顺序表: \n");
    displayTable(t1);

    printf("删除元素1: \n");
    t1=delTable(t1, 1);
    displayTable(t1);

    printf("在第二的位置插入元素5: \n");
    t1=addTable(t1, 5, 2);
    displayTable(t1);

    printf("查找元素3的位置: \n");
    int add=selectTable(t1, 3);
    printf("%d \n", add);

    printf("将元素3改为元素6: \n");
    t1=amendTable(t1, 3, 6);
    displayTable(t1);
    
    return 0;    
}