#include <stdio.h>
#define LENGTH 30
#define NUM 5

struct name {
  char fNAme[LENGTH];
  char mName[LENGTH];
  char lName[LENGTH];
};
typedef struct socialID {
  long socialSeNum;
  struct name personalName;
} personalInfo;

void outputFormat(personalInfo );
void outputPointer(personalInfo [], int n);
char * s_gets(char *ptr, int n);

int main(void)
{
  int n = 0;
  personalInfo aCounty[NUM];
  printf("Please enter the first name: ");
  while (s_gets(aCounty[n].personalName.fNAme, LENGTH) != NULL &&
         aCounty[n].personalName.fNAme[0] != '\0')
  {
    puts("Please enter the middle name: ");
    s_gets(aCounty[n].personalName.mName, LENGTH);
    puts("Please enter the last name: ");
    s_gets(aCounty[n].personalName.lName, LENGTH);
    printf("Please enter the social insurance code: ");
    scanf("%ld", &aCounty[n].socialSeNum);
    while (getchar() != '\n')
      continue;
    n++;
    if (n <= LENGTH)
      puts("Next person! Enter the first name: ");
    else
    {
      break;
      n = NUM;
    }
  }

  printf("The format output: \n");
  for (int i = 0; i < n; ++i)
    outputFormat(aCounty[i]);

  printf("The next function.\n");
  outputPointer(aCounty, n);

  return 0;
}
void outputPointer(personalInfo info[], int n)
{
  for (int i = 0; i < n; ++i)
    if (info[i].personalName.mName[0] == '\0')
      printf("%s, %s --%ld\n", info[i].personalName.lName, info[i].personalName.fNAme, info[i].socialSeNum);
    else
      printf("%s, %s %c--%ld\n", info[i].personalName.lName, info[i].personalName.fNAme, info[i].personalName.mName[0], info[i].socialSeNum);
}
void outputFormat(personalInfo info)
{
  if (info.personalName.mName[0] == '\0')
    printf("%s, %s --%ld\n", info.personalName.lName, info.personalName.fNAme, info.socialSeNum);
  else
    printf("%s, %s %c--%ld\n", info.personalName.lName, info.personalName.fNAme, info.personalName.mName[0], info.socialSeNum);
}

char * s_gets(char *ptr, int n)
{
  char *ret_ptr;
  int i = 0;

  ret_ptr = fgets(ptr, n, stdin);

  if (ret_ptr)
  {
    while (ptr[i] != '\0' && ptr[i] != '\n')
      i++;
    if (ptr[i] == '\n')
      ptr[i] = '\0';
    while (getchar() != '\n')
      continue;
  }
  return ret_ptr;
}