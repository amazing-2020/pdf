#include <stdio.h>
#include <stdbool.h>

#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define ID_MASK 0xFF
#define SIZE_MASK 0x7F
typedef struct FONT {
  unsigned int id: 8;
  unsigned int fsize : 7;
  unsigned int : 1;
  unsigned int alignment : 2;
  bool bold : 1;
  bool italic : 1;
  bool underline : 1;
  unsigned int : 3;
}font;
char status[][4] = {"on", "off"};

void showResult(font);
char showMenu(void);
void changeF(font *);
void changeFs(font *);
void changeAli(font *);
void bold(font *);
void italic(font *);
void underline(font *);
void rmNewLine();
char * itobs(int n, char * ps);

int main(void)
{
  font winFont = {1, 12, LEFT, false, true, false};
  char option;

  showResult(winFont);
  while ((option = showMenu()) != 'q')
  {
    rmNewLine();

    void (*pfun)(font *) = NULL;
    switch (option)
    {
    case 'f':
      pfun = changeF;
      break;
    case 's':
      pfun = changeFs;
      break;
    case 'a':
      pfun = changeAli;
      break;
    case 'b':
      pfun = bold;
      break;
    case 'i':
      pfun = italic;
      break;
    case 'u':
      pfun = underline;
      break;
    default:
      printf("Wrong input!\n");
      break;
    }
    if (pfun)
      (*pfun)(&winFont);
    showResult(winFont);
  }
  printf("Bye!\n");

  return 0;
}

void showResult(font this)
{
  printf("\tID SIZE ALIGNMENT    B   I   U\n");
  printf("\t%2d %3d ", this.id, this.fsize);
  switch (this.alignment)
    {
    case LEFT:
      printf("%6s", "left");
      break;
    case CENTER:
      printf("%8s", "center");
      break;
    case RIGHT:
      printf("%7s", "right");
      break;
    default:
      printf("%7s", "");
      break;
    }
    printf("\t   ");
    if (this.bold)
      printf("%4s", status[0]);
    else
      printf("%4s", status[1]);
    if (this.italic)
      printf("%4s", status[0]);
    else
      printf("%4s", status[1]);
    if (this.underline)
      printf("%4s", status[0]);
    else
      printf("%4s", status[1]);
}

char showMenu(void)
{
  char ch;

  printf("f) change font\t\ts) change size\t\ta) change alignment\n");
  printf("b) toggle bold\t\ti) toggle italic\tu) toggle underline\n");
  printf("q) quit\n");
  ch = getchar();

  return ch;
}

void changeF(font * this)
{
  unsigned int id;

  printf("Enter font ID(0~255): ");
  scanf("%u", &id);
  rmNewLine();
  this->id = id & ID_MASK;
}

void changeFs(font * this)
{
    unsigned int size;
    
    printf("Enter font size(0~127): ");
    scanf("%u", &size);
    rmNewLine();
    this->fsize = size & SIZE_MASK;
}

void changeAli(font * this)
{
  char ali;

  printf("Select alignment:\n");
  printf("l)left\t\tc)center\tr)right\n");
  ali = getchar();
  rmNewLine();
  if (ali == 'l')
    this->alignment = LEFT;
  else if (ali == 'c')
    this->alignment = CENTER;
  else if (ali == 'r')
    this->alignment = RIGHT;
  else
    return;
}

void bold(font * this)
{
  this->bold = !this->bold;
}

void italic(font * this)
{
  this->italic = !this->italic;
}

void underline(font * this)
{
  this->underline = !this->underline;
}

void rmNewLine()
{
  while (getchar() != '\n')
    continue;
}