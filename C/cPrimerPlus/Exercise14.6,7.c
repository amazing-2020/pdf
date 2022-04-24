#include <stdio.h>
#include <string.h>
typedef struct lens {
  float foclen;
  float fstop;
  char brand[30];
}LENS;

struct name {
  char first[20];
  char last[20];
};
struct bem {
  int limbs;
  struct name title;
  char type[30];
};

void printBemP(struct bem *);

int main(void)
{
  LENS camara[10];
  LENS camara2[10] = {[3] = {500, 2.0, "Remarkatar"}};
  /*
   * It is wrong.
   * camara[3] = {500, 2.0, "Remarkatar"};
   */

  camara[3].foclen = 500;
  camara[3].fstop = 2.0;
  memcpy(camara[3].brand, "Remarktar", strlen("Remarkter") + 1);
  printf("%f %f %s\n", camara[3].foclen, camara[3].fstop, camara[3].brand);
  printf("%f %f %s\n", camara2[3].foclen, camara2[3].fstop, camara2[3].brand);



  struct bem * pb;
  struct bem deb = {
      6,
      {"Berbnazel", "Gwolkapwolk"},
      "Arcturan"
  };
  pb = &deb;
  printf("%d\n", deb.limbs);
  printf("%s\n", pb->type);
  printf("%s\n", pb->type+2);
  printf("%s\t%s\n", deb.title.last, pb->title.last);
  printBemP(pb);

  return 0;
}

void printBemP(struct bem * pointBem)
{
  printf("%s %s is a %d-limbed %s.\n", pointBem->title.first, pointBem->title.last,
         pointBem->limbs, pointBem->type);
}