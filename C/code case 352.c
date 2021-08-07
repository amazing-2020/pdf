#include <stdio.h>
#include <string.h>
int reserve(int num, char * chr)
{
    int head = 0, tail = num - 1;
    int count = num / 2;

    count--;
    if (count < 0)
        return 0;
    else
    {
        *(chr + head) ^= *(chr + tail);
        *(chr + tail) ^= *(chr + head);
        *(chr + head) ^= *(chr + tail); 
    }
    return reserve(num - 2, chr + 1);
}
int main(void)
{
    char buf[6] = {0};

    printf("Please enter 6 characters: ");
    fgets(buf, 6, stdin);
    reserve(strlen(buf), buf);
    printf("Output reslut in reserved order: ");
    printf("%s \n", buf);

    return 0;
}