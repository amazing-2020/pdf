#include <stdio.h>
#include <stdlib.h>
void calculate_average();

int main(int argc, char *argv [])
{
  if (argc == 2)
  {
    FILE * fp;
    char words[100];
    if ((fp = fopen(argv[1], "r")) == NULL)
      fprintf(stderr, "The file not exist.\n");
    else
    {
      while (fscanf(fp, "%s", words) == 1)
        puts(words);
    }
    exit(0);
  }
  if (argc == 1)
    calculate_average();
  else
  {
    fprintf(stderr, "%s \n", "Too many parameters");
    exit(1);
  }

  return 0;
}

void calculate_average()
{
  float sum = 0, *num;
  int count = 0, realCount = 0;

  printf("How many number do you want to calculate: ");
  scanf("%d", &count);
  num = (float *)calloc(count, sizeof(float));
  for (int i = 0; i < count; ++i)
  {
    if ((fscanf(stdin, "%f", &num[i])) != 1)
    {
      fprintf(stderr, "Wrong input.\n");
      break;
    }
    printf("Next:\n");
    realCount = i+1;
  }
  for (int i = 0; i < realCount; ++i)
    sum += num[i];
  printf("The average %f \n", sum / realCount);
  free(num);
}