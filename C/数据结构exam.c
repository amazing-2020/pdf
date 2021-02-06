#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *array1 = 0, *array2 = 0, *array3 = 0, num1, num2, num3, i, j = 0;

    printf("Please input the number of element1: ");
    scanf("%d", &num1);
    array1 = (int *)malloc(sizeof(int)*num1);
    if (array1 == 0)
    {
        printf("out of memory, press any key to quit...\n");
        exit(0);
    }
    //提示输入num个数字
    printf("please input %d elements1: ", num1);
    for (i = 0; i < num1; i++) 
    {
        scanf("%d", &array1[i]);
    }
    

    //second
    printf("Please input the number of element2: ");
    scanf("%d", &num2);
    array2 = (int *)malloc(sizeof(int)*num2);
    if (array2 == 0)
    {
        printf("Out of memory press any key to input...\n");
        exit(0);
    }
    //提示输入num个数字
    printf("please input %d elements2 ", num2);
    for (i = 0; i < num2; i++) 
    {
        scanf("%d", &array2[i]);
    }
    
    num3 = num1 + num2;
    array3 = (int *)malloc(sizeof(int)*num3);
    if (array3 == 0)
    {
        printf("Out of memory press any key to quit...\n");
        exit(0);
    }
    for (i = 0; i < num1; i++)
    {
        array3[i] = array1[i]; 
    }
    for (i = num1; i <  num3; i++) 
    {
        array3[i] = array2[j];
        j ++;
    }
    
    printf("%d elements1 are. \n", num1);
    for (i = 0; i <num1; i++)
    {
        printf("%d,", array1[i]);
    }
    printf("\b\n");

    printf("%d elements2 are: \n", num2);
    for (i = 0;i < num2; i++) 
    {
        printf("%d,", array2[i]);
    }
    printf("\b\n");

    printf("%d elements3 are: \n", num3);
    for (i = 0;i < num3; i++) 
    {
        printf("%d,", array3[i]);
    }
    printf("\b\n");

    free(array1);
    free(array2);
    free(array3);
}