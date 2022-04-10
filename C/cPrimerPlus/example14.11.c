#include <stdio.h>
#define MAXTITL 41
#define MAXAUTL 31

struct book {
  char title[MAXTITL];
  char auther[MAXAUTL];
  float value;
};

int main(void)
{
  struct book readfirst;
  int score;

  printf("Enter test score: ");
  scanf("%d", &score);

  if (score >= 84)
    readfirst = (struct book) {"Crime and punishment",
                              "Pyodor Dostoyevsky",
                              11.25
    };
  else
    readfirst = (struct book) {"Mr. Bouncy's nice hat",
                              "Fred Winsome",
                                5.99
    };
  printf("Your assigned reading:\n");
  printf("%s by %s, $%.2f\n", readfirst.title, readfirst.auther, readfirst.value);

  return 0;
}