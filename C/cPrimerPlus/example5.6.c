#include <stdio.h>
void rules();

int main(void)
{
    printf("Integer division: 5/4  is %d \n", 5/4);
    printf("Integer division: 6/3  is %d \n", 6/3);
    printf("Integer division: 7/4  is %d \n", 7/4);
    printf("Float division: 7./4.  is %1.2f \n", 7./4.);
    printf("mixed division: 7/4  is %1.2f \n", 7./4);
    printf("\n");
    rules();
    
    return 0;
}

void rules()
{
    int top, score;

    top = score = - (2+5) * 6 + (4 + 3*(2+3));
    printf("top = %d, score = %d \n", top, score);
}