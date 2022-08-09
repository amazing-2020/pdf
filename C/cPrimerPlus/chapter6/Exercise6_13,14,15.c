#include <stdio.h>
#include <string.h>
#define SIZE 8
#define SENTENCE 255
void iArray();
void douArray();
void oneSentence();
int main(void)
{
    iArray();
    douArray();
    oneSentence();

    return 0;
}

void iArray()
{
    int array[SIZE]; //SIZE的值應該爲數組的大小減1
    int i;

    for (i = 1, array[0] = 1; i <= 7; i++)
    {
        array[i] = array[i-1]*2;
    }
    do
    {
        i--;
        printf("%d \n", array[i]);
    } while (i > 0);
}

void douArray()
{
    double array1[SIZE], array2[SIZE];
    int i;

    printf("Please enter the value of the first array: ");
    for (i = 0; i < 8; i++)
    {
        scanf("%lf", &array1[i]);
    }
    for (i = 1, array2[0] = array1[0]; i < 8; i++)
    {
        array2[i] += array1[i] + array2[i-1];
    }
    printf("Two arrays list: \n");
    for (i = 0; i < 8; i++)
    {
        printf("%5.0lf", array1[i]);
    }
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        printf("%5.0lf", array2[i]);
    }
    printf("\n");
}

void oneSentence()
{
    char sentence[SENTENCE];
    int length;

    printf("Please enter a sentence: ");
    scanf("%s", sentence);
    length = strlen(sentence);
    for (int i = length; i >= 0; i--)
    {
        printf("%c", sentence[i]);
    }
    printf("\n");
}