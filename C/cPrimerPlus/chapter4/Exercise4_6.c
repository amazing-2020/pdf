#include <stdio.h>
#include <string.h>
#define SIZE 20
void printName(char *firstname, char *lastname);
void printLen(int Fnum, int Lnum, int n);
void space(int n);
int main(void)
{
    char firstName[SIZE], lastName[SIZE];
    int Fnum, Lnum;

    printf("Please input your first name: ");
    scanf("%s", firstName);
    printf("Please input your last name: ");
    scanf("%s", lastName);
    Fnum = strlen(firstName);
    Lnum = strlen(lastName);
    
    printName(firstName, lastName);
    printLen(Fnum, Lnum, 1);
    printName(firstName, lastName);
    printLen(Fnum, Lnum, 0);

    return 0;
}

void printName(char *firstname, char *lastname)
{
    printf("%s %s \n", firstname, lastname);
}

void printLen(int Fnum, int Lnum, int n)
{
    int i;
    if (n == 1)
    {
        space(Fnum);
    }
    printf("%d", Fnum);
    
    putchar(' ');

    if (n == 1) {
        space(Lnum);
    } else {
        space(Fnum);
    }
    printf("%d \n", Lnum);
}

void space(int n) 
{
    int i, offset = 0, judgment = n;
    
    while (1)
    {
        judgment /= 10;
        if (judgment >= 1)
        {
            offset++;
        } else {
            break;
        }
    }
    for ( i = 0; i < n - 1 - offset; i++)
    {
        putchar(' ');
    }  
}