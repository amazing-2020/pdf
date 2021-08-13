#include <stdio.h>

int main()
{
    char array_char[1024*1024*1024] = {0};
    array_char[0] = 'a';
    printf("%s \n", array_char);
    getchar();
    //return 0;
}//溢出