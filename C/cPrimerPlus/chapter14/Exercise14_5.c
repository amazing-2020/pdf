#include <stdio.h>
#define LENGTH 10
#define CSIZE 4
struct name {
    char fName[LENGTH];
    char lName[LENGTH];
};

typedef struct student {
  struct name stu;
  float grade[3];
  float avg;
}aStudent;
char course[3][LENGTH] = {"Chinese", "Math", "Physics"};

int getInfo(aStudent *);
void getAvg(aStudent *, int);
void outputInfo(aStudent *, int);
float AvgGradeAll(aStudent *, int);
char *s_gets(char *s, int n);
void rm_newLine();

int main(void)
{
  aStudent pupil[CSIZE];
  int n = 0;
  float Average = 0;

  n = getInfo(pupil);
  getAvg(pupil, n);
  outputInfo(pupil, n);
  if (n > 0)
  {
    Average = AvgGradeAll(pupil, n);
    printf("The average of all student is %.2f.\n", Average);
  } else {
    printf("No data, bye!");
  }


  return 0;
}

int getInfo(aStudent * m)
{
  int count = 0;

  printf("Enter the first name: ");
  while ((s_gets(m[count].stu.fName, LENGTH) != NULL) &&
         m[count].stu.fName[0] != '\0' && count < CSIZE)
  {
    printf("Enter the last name: ");
    s_gets(m[count].stu.lName, LENGTH);
    printf("Enter the grade: \n");
    for (int i = 0; i < 3; ++i) {
      printf("The %s grade: ", course[i]);
      scanf("%f", &(m[count].grade[i]));
      rm_newLine();
    }
    count++;
    printf("Next student's first name: ");
  }

  return count;
}

void getAvg(aStudent * m, int n)
{
  for (int i = 0; i < n; ++i)
    m[i].avg = (m[i].grade[0] + m[i].grade[1] + m[i].grade[2]) / 3;
}

void outputInfo(aStudent * m, int n)
{
  for (int i = 0; i < n; ++i) {
    printf("%s %s's grade: 1:%.2f, 2:%.2f, 3:%.2f, average grade: %.2f.\n",
           m[i].stu.fName, m[i].stu.lName, m[i].grade[0], m[i].grade[1], m[i].grade[2],
           m[i].avg);
  }
}

float AvgGradeAll(aStudent * m, int n)
{
  float sum = 0;

  for (int i = 0; i < n; ++i)
    sum += m[i].avg;

  return sum / n;
}

char *s_gets(char *str, int n)
{
  char *ret_pt;
  int i = 0;

  ret_pt = fgets(str, n, stdin);
  if (ret_pt)
  {
    while (str[i] != '\0' && str[i] != '\n')
      i++;
    if (str[i] == '\n')
      str[i] = '\0';
  }

  return ret_pt;
}

void rm_newLine()
{
  while (getchar() != '\n')
    continue;
}