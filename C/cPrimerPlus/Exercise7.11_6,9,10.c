#include <stdio.h>
void practice6();
void practice9();
void practice10();
int main(void)
{
    printf("-----6----- \n");
    practice6();
    printf("-----9----- \n");
    practice9();
    getchar();
    printf("-----10----- \n");
    practice10();

    return 0;
}

void practice6()
{
    int i = 0;
    while (i < 3)
    {
        switch ( i++)
        {
        case 0:printf("fat ");
        case 1:printf("hat ");
        case 2:printf("cat ");
        default:printf("Oh, no!");
        }
        putchar('\n');
    }
}

void practice9()
{//Type q h c b
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
            continue;
        printf("Step 1 \n");
        if (ch == 'c')
            continue;
        else if (ch == 'b')
            break;
        else if (ch == 'h')
            goto laststep;
        printf("Step 2 \n");
    laststep: printf("Step 3 \n");    
    }
    printf("Done \n");
}

void practice10()
{
    char ch;

    for (;;)
    {
        for (;(ch = getchar()) != '#';)
        {
            if (ch == '\n')
                break;
            printf("Step 1 \n");
            if (ch == 'c')
                break;
            else if (ch == 'b')
                break;
            for (;;)
            {
                if ( ch == 'h')
                {
                    printf("Step 3 \n");
                    break;
                }
                else
                {
                    printf("Step 2 \n");
                    printf("Step 3 \n");
                    break;
                }
            }
        }
        if (ch == 'b' || ch == '#')
            break;
    }
    printf("Done \n");
}