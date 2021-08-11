#include <stdio.h>
#include <string.h>
#define NUM_LENGTH 5

char *deal_zero(char *str, int len);
int main(void)
{
    unsigned char str[32] = {0};
    unsigned char *temp_str = NULL;
    unsigned char reslut_str[32] = {0};
    int i = 0, len = 0;

    printf("Please enter %d numbers. \n", NUM_LENGTH);
    scanf("%s", str);
    len = strlen(str);
    temp_str = deal_zero(str, len);
    if (len == 0)
    {
        len = 1;
        reslut_str[0] = '0';
    }
    else if (len > NUM_LENGTH)
    {
        len = NUM_LENGTH;
        strncpy(reslut_str, temp_str, len);
    }
    else
        strncpy(reslut_str, temp_str, len);
    printf("It has %d numbers, the reversed number is: ", len);
    for (i = 0; i < len; i++)
    {
        printf("%c", reslut_str[len - i - 1]);
    }
    printf("\n");
    
    return 0;
}

char *deal_zero(char *str, int len)
{
    if (str[0] == '0')
    {
        strncpy(str, str+1, len--);
        deal_zero(str, len--);
    }

    return str;
}