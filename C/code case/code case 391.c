#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rank(int *numArray, int arrayLen);//sort array
void insert(int *numArray, int num, int arrayLen);

int main()
{
    srand((int)time(NULL));
    
    int *numArray = NULL, i, *InsertNumArray = NULL, len, insertN, max, min;
    
    printf("Please enter the number of the array: ");
    scanf("%d", &len);
    printf("Please enter the renge of the element: ");
    scanf("%d %d", &min, &max);
    //memory
    numArray = (int *)realloc(numArray, len * sizeof(int));
    for (i = 0; i < len; i++)
        numArray[i] = rand() % (max - min + 1) + min;
    rank(numArray, len);
    printf("The ariginal array is: ");
    for (i = 0; i < len; i++)
        printf("%-6d", numArray[i]);
    printf("\nPlease input a number to insert: ");
    scanf("%d", &insertN);
    printf("Please enter them(it): ");
    InsertNumArray = (int *)realloc(InsertNumArray, insertN * sizeof(int));
    numArray = (int *)realloc(numArray, (len + insertN) * sizeof(int));
    for (i = 0; i < insertN; i++)
    {
        scanf("%d", &InsertNumArray[i]);
        insert(numArray, InsertNumArray[i], len+1);
    }
    printf("The new array is: ");
    for (i = 0; i < len + insertN; i++)
        printf("%-6d", numArray[i]);
    printf("\n");

    return 0;
}

void rank(int *numArray, int arrayLen)
{
    int i, j;

    for (i = 0; i < arrayLen; i++)
        for (j = i + 1; j < arrayLen; j++)
            if (numArray[i] > numArray[j])
            {
                numArray[i] = numArray[j] + numArray[i];
                numArray[j] = numArray[i] - numArray[j];
                numArray[i] = numArray[i] - numArray[j];
            }
}

void insert(int *numArray, int insertNum, int arrayLen)
{
    int i, j, *p1 = numArray, *p2 = numArray;

    p1 += arrayLen - 1;//pointer at the end of the array
    p2 += arrayLen;//pointer out of the end of the array at the first address
    for (i = 0; i < arrayLen; i++)
    {
        if (insertNum < numArray[i])
        {
            for (j = 1; j <= (arrayLen - i); j++)
                *p2-- = *p1--;
            *p2 = insertNum;
            break;
        }
        if (i == arrayLen - 1)
        {   
            *p2 = insertNum;
            break;
        }
    }
}