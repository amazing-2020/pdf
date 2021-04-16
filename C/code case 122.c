#include <stdio.h>

void reverse_string(char * str) 
{
    /**str passes the address of the first
     * character of the string(a pointer to 
     * the first address)
     */
    if (*( ++str ) != '\0')
    {
        reverse_string(str);
    }
    printf("%c", *(str - 1));
}

int main()
{
    char* ch = "abcdefg";
    printf("String before flip: %s \n", ch);
    printf("String after flip: ");
    reverse_string(ch);
    printf("\n");

    return 0;
}