#include <stdio.h>
void fun1(void);
void fun2(void);
void fun3(void);
void fun4(void);

int main(void)
{
  void (*pfun[4])(void) = {fun1, fun2, fun3, fun4};
  char choice;

  printf("Please enter the choice: \n");
  printf("a) func1\t\tb) func3\n");
  printf("c) func2\t\td) func4\n");
  choice = getchar();
  switch (choice) {
    case 'a':
      (*pfun[0])();
      break;
    case 'b':
      (pfun[1])();
      break;
    case 'c':
      (pfun[2])();
      break;
    case 'd':
      (pfun[3])();
      break;
    default:
      printf("Invalid input.\n");
      break;
    }

  return 0;
}

void fun1(void)
{
  printf("Run function 1\n");
}

void fun2(void)
{
  printf("Run function 2\n");
}

void fun3(void)
{
  printf("Run function 3\n");
}

void fun4(void)
{
  printf("Run function 4\n");
}