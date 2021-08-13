#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXTITL 41
#define MAXAUTL 31
#define MAVXBKS 100

char * s_gets(char *st, int n);
struct book
{
    char title[MAXTITL];
    char auther[MAXAUTL];
    float value;
};

int main()
{
    struct book library[MAVXBKS];
    int i;
    int index;
    printf("请问你要录入多少本书的信息: \n");
    do
    {
        scanf("%d", &index);
    } while (index > MAVXBKS);
    getchar();
    for (i = 0; i<index; i++)
    {
        printf("请输入第%d本书的名字 \n", i+1);
        s_gets(library[i].title, MAXTITL);
        printf("输入作品其作者: \n");
        s_gets(library[i].auther, MAXAUTL);
        printf("请输入书本的价格\n");
        scanf("%f", &library[i].value);
        getchar();
    }
    for (i = 0; i<index; i++)
    {
        printf("%d \t %s 是%s 写的 定价为 %f yuan \n", i+1, library[i].title, library[i].auther, library[i].value);
    }

    return 0;
}

char *s_gets(char *st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st,'\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while(getchar() != '\n')
            {
                continue;
            }
        }
    }

    return ret_val;
}