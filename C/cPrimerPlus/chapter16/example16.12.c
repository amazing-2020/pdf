#include <stdio.h>

void why_me();

int main()
{
  printf("The file is %s.\n", __FILE__);
  printf("The date is %s.\n", __DATE__);
  printf("The time is %s.\n", __TIME__);
  printf("The version is %ld.\n", __STDC_VERSION__);
  printf("This line is %d.\n", __LINE__);
  printf("This function %s.\n", __func__ );
  why_me();

  return 0;
}

void why_me()
{
  printf("This function  %s.\n", __func__ );
  printf("This line is %d.\n", __LINE__);
#line 100
  printf("This line is %d.\n", __LINE__);
#line 456 "123.c"
  printf("This function %s.\n", __FILE__ );

}