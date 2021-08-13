#include <stdio.h>

enum rival 
{
    x = 120,
    y, 
    z
};

int main()
{
    enum rival a, b, c;
    for ( a = x; a <= z; a++)
    {
        for ( b = x; b <= z; b++)
        {
            for ( c = x; c <= z; c++)
            {
                if (a!=x && c!=x && c !=z && a!=b & a!=c & b!=c)
                {
                    printf("a = %c\nb = %c\nc = %c\n",a,b,c);
                }                
            }
        }
    }

    return 0;    
}