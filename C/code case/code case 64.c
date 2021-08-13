#include <stdio.h>

struct ONE_byte
{
    unsigned char _bool:1;
    unsigned char del_flag:1;
    unsigned char status:4;
} one_byte;

struct TWO_byte
{
    unsigned char ccc1:4;
    unsigned char ccc2:4;
    unsigned char ccc3:4;
    unsigned char ccc4:4;
} two_byte;

struct THREE_byte
{
    unsigned char ccc1:4;
    unsigned char ccc2:4;
    unsigned char ccc3:4;
    unsigned char ccc4:4;
    unsigned char ccc5:4;
} three_byte;

struct FOUR_byte
{
    unsigned int ccc1:16;
    unsigned int ccc2:16;
} four_byte;

struct EIGHT_byte
{
    unsigned char ccc1:1;
    unsigned int ccc2:1;
} eight_type;

int main()
{
    printf("one %lu \n", sizeof(one_byte));
    printf("two %lu \n", sizeof(two_byte));
    printf("three %lu \n", sizeof(three_byte));
    printf("four %lu \n", sizeof(four_byte));
    printf("eight %lu \n", sizeof(eight_type));

    return 0;
}
