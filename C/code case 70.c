#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a value \n");
    fgets(str, sizeof(str), stdin);    
    printf("\n %d You entered\n", sizeof(str));
    puts(str);
    
    return 0;
}