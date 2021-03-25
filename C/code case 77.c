#include <stdio.h>

int main()
{
    char h[]="hello";
    printf("%3s, %-6s, %-5.2s, %4.3s, %.3s .\n", h,h,h,h,h);
    printf("abcdefghijklmnopqrstuvwxyzabcdefg");
}