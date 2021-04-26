#include <stdio.h>

static int g_x;
int g_y;
int main(void)
{
    static int x;
    printf(" g_x: %d \n g_y: %d \n x: %d", g_x, g_y, x);
    return 0;
}