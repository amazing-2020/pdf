#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "17_7_tree.h"
#define FILENAME "17_7_words.txt" \
 //the file codec must be ascii, if not the program can't read valid data
 //this program can't process the non ascii characters
char menu(void);
void showwords(const Tree * pt);
void findwords(const Tree * pt);
void printitem(Item item);
static void readFile(FILE * fp, Tree * ptree);
static bool checkWord(char * word);
static void addWord(Tree * pt, const char * word);
static void lowercase(char * str);
static char * s_gets(char * st, int n);

int main()
{
  FILE *fp;
  if ((fp = fopen(FILENAME, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", FILENAME);
    exit(EXIT_FAILURE);
  }

  Tree words;
  char choice;

  InitializeTree(&words);
  readFile(fp, &words);
  fclose(fp);
  while ((choice = menu()) != 'q')
  {
    switch (choice) {
      case 'p':
        printf("\n");
        showwords(&words);
        break;
      case 'f':
        findwords(&words);
        break;
      default:
        puts("Switching error!");
    }
  }
  DeleteAll(&words);
  puts("Bye");

  return 0;
}

char menu(void)
{
  char ch;

  puts("\nFILE WORDS COUNT PROGRAM");
  puts("Enter the letter corresponding to your choice");
  puts("p) show all words and it's amount");
  puts("f) enter a word and find it's amount");
  puts("q) quit");
  while ((ch = getchar()) != EOF)
  {
    while (getchar() != '\n')
      continue;
    ch = tolower(ch);
    if (strchr("pfq", ch) == NULL)
      puts("Please enter an p, f or q:");
    else
      break;
  }
  if (ch == EOF)
    ch = 'q';
  return ch;
}

void showwords(const Tree * pt)
{
  if (TreeIsEmpty(pt))
    puts("No entries");
  else
    Traverse(pt, printitem);
}

void findwords(const Tree * pt)
{
  Item temp;

  if (TreeIsEmpty(pt))
  {
    puts("No words");
    return;
  }

  puts("Please enter the word you want to find: ");
  s_gets(temp.word, WLEN);
  temp.n = 1;
  if (isupper(temp.word[0]) && temp.word[1] != '\0' && islower(temp.word[1]))
    lowercase(temp.word);
  printf("The word: %-24s has %d in this article\n",
         temp.word, InTree(&temp, pt));
}

void printitem(Item item)
{
  printf("%d %-24s\n", item.n, item.word);
}

static void readFile(FILE * fp, Tree * ptree)
{
  char ch, word[WLEN] = {'\0'};
  int inword = 0, index = 0;

  while ((ch = fgetc(fp)) != EOF)
  {
    if (!(isspace(ch)))
    {
      /*
       * If this character is not NULL character
       * 1.Assign a value to a word array
       * 2.Indicates that within a word, further reading iis required
       */
      word[index++] = ch;
      inword = 1;
    } else {
      /*
       * If this character is a NULL character
       * 1.Indicates that this word has been read and can be added
       */
      inword = 0;
    }
    if (inword == 0) {
      /*
       * If not within the word, then
       * 1.Mark the end of the word
       * 2.Subscript 0, prepare to read the next word
       * 3.Send the word to the word process program
       */
      word[index] = '\0';
      if (checkWord(word))
        addWord(ptree, word);
      index = 0;
    }
  }
}

static bool checkWord(char * word)
{
  char arr[WLEN];
  int size = strlen(word), count = 0;
  bool is_word = true;

  strncpy(arr, word, size);
  arr[size] = '\0';

  /*
   * Exclude individual connectors
   */
  if (word[0] == '-' || isdigit(word[0])){
    is_word = false;
  } else {
    /*
     * Leave only letters and connectors
     */
    for (int i = 0; i < size; ++i) {
      if (isalpha(arr[i]) || arr[i] == '-') {
        word[count++] = arr[i];
      }
    }
    /*
     * Determine the number of legal characters while
     * ensuring the end is a character
     */
    if (count == 0 || !isalpha(word[count-1]))
      is_word = false;
    else
    {
      word[count] = '\0';
      /*
       * Initial lowercase
       */
      if (isupper(word[0]) && word[1] != '\0' && islower(word[1]))
        word[0] = tolower(word[0]);
    }
  }

  return is_word;
}

static void addWord(Tree * pt, const char * word)
{
  Item temp;

  if (TreeIsFull(pt))
    puts("Too much words");
  else
  {
    temp.n = 1;
    strncpy(temp.word, word, WLEN);
    AddItem(&temp, pt);
  }
}

static void lowercase(char * str)
{
  while (*str)
  {
    *str = tolower(*str);
    str++;
  }
}

static char * s_gets(char * st, int n)
{
  char * ret_val;
  char * find;

  ret_val = fgets(st, n, stdin);
  if (ret_val)
  {
    find = strchr( st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n')
        continue;
  }
  return ret_val;
}