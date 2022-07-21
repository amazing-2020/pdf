#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define FONT_MASK 0XFF
#define SIZE_MASK 0X7F00
#define ALI_MASK 0X30000
#define ALI_LEFT 0X00000
#define ALI_CENTER 0X10000
#define ALI_RIGHT 0X20000
#define LEFT 0
#define CENTER 1
#define RIGHT 2
#define BOLD 0X40000
#define ITALIC 0X80000
#define UNDERLINE 0X100000
struct Font {
  unsigned int id: 8;
  unsigned int fsize : 7;
  unsigned int : 1;
  unsigned int alignment : 2;
  bool bold : 1;
  bool italic : 1;
  bool underline : 1;
  unsigned int : 3;
};
union Views
{
  struct Font font_view;
  unsigned long ul_view;
};
char status[][4] = {"on", "off"};

void showResult(unsigned long);
char showMenu(void);
void changeF(unsigned long *);
void changeFs(unsigned long *);
void changeAli(unsigned long *);
void bold(unsigned long *);
void italic(unsigned long *);
void underline(unsigned long *);
void rmNewLine();
char * itobs(long n, char * ps);

int main(void)
{
  union Views font_model = {{1, 12, LEFT, true, false, true}};
  char option;

  showResult(font_model.ul_view);
  while ((option = showMenu()) != 'q')
  {
    rmNewLine();
    
    void (*pfun)(unsigned long *) = NULL;
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
      (*pfun)(&font_model.ul_view);
    showResult(font_model.ul_view);
  }
  puts("Bye!");

  return 0;
}

void showResult(unsigned long this)
{
  printf("\tID SIZE ALIGNMENT    B   I   U\n");
  printf("\t%2ld %3ld ", this & FONT_MASK, (this & SIZE_MASK) >> 8);
  switch ((this & ALI_MASK) >> 16)
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
  if ((this & BOLD) >> 18)
    printf("%4s", status[0]);
  else
    printf("%4s", status[1]);
  if ((this & ITALIC) >> 19)
    printf("%4s", status[0]);
  else
    printf("%4s", status[1]);
  if ((this & UNDERLINE) >> 20)
    printf("%4s", status[0]);
  else
    printf("%4s", status[1]);
  printf("\n");
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

void changeF(unsigned long * this)
{
  unsigned int id;

  printf("Enter font ID(0~255): ");
  scanf("%u", &id);
  rmNewLine();
  *this &= ~FONT_MASK;
  *this |= id;
}

void changeFs(unsigned long * this)
{
  unsigned int size;
    
  printf("Enter font size(0~127): ");
  scanf("%u", &size);
  rmNewLine();
  *this &= ~SIZE_MASK;
  *this |= (size << 8);
}

void changeAli(unsigned long * this)
{
  char ali;

  printf("Select alignment:\n");
  printf("l)left\t\tc)center\tr)right\n");
  ali = getchar();
  rmNewLine();
  *this &= ~ALI_MASK;
  if (ali == 'l')
    *this |= ALI_LEFT;
  else if (ali == 'c')
    *this |= ALI_CENTER;
  else if (ali == 'r')
    *this |= ALI_RIGHT;
  else
    return;
}

void bold(unsigned long * this)
{
  *this ^= BOLD;
}

void italic(unsigned long * this)
{
  *this ^= ITALIC;
}

void underline(unsigned long * this)
{
  *this ^= UNDERLINE;
}

void rmNewLine()
{
  while (getchar() != '\n')
    continue;
}