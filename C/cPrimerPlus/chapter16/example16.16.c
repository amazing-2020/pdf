#include <stdio.h>
#include <stdlib.h>

void sign_off(void);
void too_vad(void);

int main(void)
{
  int n;

  atexit(sign_off);
  puts("Enter an integer:");
  if (scanf("%d", &n) != 1)
  {
    puts("That's not an integer!");
    atexit(too_vad);
    exit(EXIT_FAILURE);
  }
  printf("%d is %s.\n", n, (n % 2) ? "even" : "odd");

  return 0;
}

void sign_off(void)
{
  puts("Thus terminates another magnificent program from");
  puts("SeeSaw Software!");
}

void too_vad(void)
{
  puts("SeaSaw software extends its heartfelt condolences");
  puts("to you upon the failure of your program");
}