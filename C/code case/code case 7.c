#include <stdio.h>
#include <stdlib.h>

//回调函数
void populate_array(int *array, size_t arraysize, int (* getNextValue)(void))
{
    for (size_t i = 0; i<arraysize; i++)
    {
        array[i] = getNextValue(); 
    }
}

int getNextValue(void) 
{
    return rand();
}

int main(void)
{
    int myarray[10];
    populate_array(myarray, 10, getNextValue);
    for (int i=0; i<10; i++)
    {
        printf("%d \n", myarray[i]);
        printf("%p \t", myarray[i]);
    }

    return 0;
}