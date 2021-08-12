#include <stdio.h>
void menu();
float getNumber(char option, int i);
float get_flo(void);
int main(void)
{
    char option;
    float i, j;

    menu();
    while ((option = getchar()) != EOF)
    {
        switch (option)
        {
            case 'a': i = getNumber(option, 1);
                      j = getNumber(option, 2);
                      printf("%0.1f + %0.1f = %0.1f \n", i, j, i + j);
                      break;
            case 's': i = getNumber(option, 1);
                      j = getNumber(option, 2);
                      printf("%0.1f - %0.1f = %0.1f \n", i, j, i - j);
                      break;
            case 'm': i = getNumber(option, 1);
                      j = getNumber(option, 2);
                      printf("%0.1f * %0.1f = %0.1f \n", i, j, i * j);                      
                      break;
            case 'd': i = getNumber(option, 1);
                      j = getNumber(option, 2);
                      printf("%0.1f / %0.1f = %0.1f \n", i, j, i / j);
                      break;
            case 'q': break;
            default: break;
        }
        if (option == 'q')
            break;
        menu();
        while (getchar() != '\n')
            continue;
    }
    printf("Bye! \n");

    return 0;
}

void menu()
{
    printf("Enter operation of your choice: \n");
    printf("a. add           s. subtract \n");
    printf("m. multiply      d. divide \n");
    printf("q. quit \n");
}

float getNumber(char option, int i)
{
    float num;
    int factor;
    
    if ( i == 1)
    {
        printf("Please enter first number: ");
        num = get_flo();
    }
    if ( i == 2)
    {
        printf("Please enter second number: ");
        num = get_flo();
        while (num == 0 && option == 'd')
        {
            printf("Enter a number more than 0: ");
            num = get_flo();
        }
    }
    
    return num;
}

float get_flo(void)
{
    float num;
    char ch;

    while(scanf("%f", &num) != 1)
    {
        while ((ch = getchar()) != '\n')
        {
            putchar(ch);
        }
        printf(" is not a number. \n");
        printf("Please enter a number such as 2.5, -1.78E8, or 3: ");
    }

    return num;
}