#include <stdio.h>
#include <string.h>
#define TOTAL 4

struct {
    char name[20];
    int num;
    char sex;
    char profession;
    union 
    {
        float score;
        char course[20];
    } sc;
} bodys[TOTAL];

int main()
{
    int i;
    for (i=0; i<TOTAL; i++)
    {
        printf("Input info \n");
        scanf("%s %d %c %c", bodys[i].name, &bodys[i].num, &bodys[i].sex, &bodys[i].profession); 
        if(bodys[i].profession == 's') {
            scanf("%f", &bodys[i].sc.score);
        } else {
            scanf("%s", bodys[i].sc.course);
        }
        fflush(stdin);
    }

    //Output
    printf("\n Name \t Num \t Sex \t Profession  Score/Cource \n");
    for(i=0; i<TOTAL; i++)
    {
        if (bodys[i].profession == 's')
        {
            printf("%s\t%d\t%c\t%c\t\t%f\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.score);
        } else {
            printf("%s\t%d\t%c\t%c\t\t%s\n", bodys[i].name, bodys[i].num, bodys[i].sex, bodys[i].profession, bodys[i].sc.course);
        }
    }

    return 0;
}