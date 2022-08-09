#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char letter, prev = 0;
    long chNum = 0, wordNum = 0;
    FILE *fp;

    fp = fopen("text8_4.txt", "r");
    while ((letter = getc(fp)) != EOF)
    {
        if (isalpha(letter))
            chNum++;
        //if ((ispunct(letter) && isalpha(prev)) || (isspace(letter) && isalpha(prev)))
        if ((!isalpha(letter)) && isalpha(prev))
            wordNum++;
        prev = letter;
    }
    printf("%ld, %ld, %f \n", chNum, wordNum, (float)chNum/(float)wordNum);

    return 0;
}