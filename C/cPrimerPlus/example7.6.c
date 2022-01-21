#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define PERIOD '.'
#define STOP '|'
void wordcnt();
int main(void)
{
    char ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)//輸入一個有標點符號的句子
    {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters. \n", charcount);
    printf("-------------------\n");
    wordcnt();

    return 0;
}

void wordcnt()
{
    char c;//讀入的值
    char prev;//讀入的前一個值
    long n_chars = 0;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed (| to terminate): \n");
    prev = '\n';
    while ((c = getchar()) != STOP)
    {
        n_chars++;
        if ( c == '\n')
            n_lines++;
        if ( !isspace(c) && !inword)
        {
            inword = true;
            n_words++;
        }
        if (isspace(c) && inword)
            inword = false;
        prev = c;
    }
    
    if (prev != '\n')
        p_lines = 1; //在輸入行末尾加上 STOP
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_words, n_lines);
    printf("partial lines = %d \n", p_lines);
}