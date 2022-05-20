#include <stdio.h>
#include <stdlib.h>
#define FILENAME "Softball-14_6.txt"
#define LENGTH 10
#define numOfPlayer 19
#define infoLength 40

typedef struct softball_team {
  int number; //player number
  char fName[LENGTH]; // first name
  char lName[LENGTH]; //last name
  int bats; //player’s official times at bat,
  int hits; //the number of hits,
  int walks; //
  int RBI; //runs batted in
  float bat_average;
}player;

void readInfo(FILE * fp, player *, int []);
void calculateAvg(int *, player *, player *);
void outputInfo(player *, player);

int main(void)
{
  FILE *fp;
  player teamItem[numOfPlayer] = {0}, allTeam = {0, "", "", 0 , 0, 0, 0, 0};
  int numOfEntry[numOfPlayer] = {0};

  if ((fp = fopen(FILENAME, "r")) == NULL)
  {
    fprintf(stderr, "Can't open the file %s", FILENAME);
    exit(-1);
  }
  readInfo(fp, teamItem, numOfEntry);
  calculateAvg(numOfEntry, teamItem, &allTeam);
  printf("\\\\%d\n", allTeam.bats);

  outputInfo(teamItem, allTeam);

  return 0;
}

void readInfo(FILE * fp, player * arr, int entry[])
{
  char string[infoLength];
  player temp;
  int number = 0;

  while (fgets(string, infoLength, fp) != NULL)
  {
    sscanf(string,"%d \n", &number);
    if (entry[number] != 0)
    {
      sscanf(string, "%d %s %s %d %d %d %d", &(temp.number), temp.fName,
             temp.lName, &(temp.bats), &(temp.hits), &(temp.walks), &(temp.RBI));
      arr[number].bats += temp.bats;
      arr[number].hits += temp.hits;
      arr[number].walks += temp.walks;
      arr[number].RBI += temp.RBI;
    }
    else
    {
      sscanf(string, "%d %s %s %d %d %d %d", &(arr[number].number),
             arr[number].fName,arr[number].lName, &(arr[number].bats),
             &(arr[number].hits), &(arr[number].walks),&(arr[number].RBI));
    }
    entry[number] += 1;
  }
}

void calculateAvg(int * entry, player * arr, player * team)
{
  for (int i = 0; i < numOfPlayer; ++i)
  {
    team->bats += arr[i].bats;
    team->hits += arr[i].hits;
    team->walks += arr[i].walks;
    team->RBI += arr[i].RBI;
    if (entry[i] == 0)
      arr[i].bat_average = 0;
    else
      arr[i].bat_average = arr[i].bats / entry[i];
    team->bat_average += arr[i].bat_average;
  }
  team->bats /= numOfPlayer;

  team->hits /= numOfPlayer;
  team->walks /= numOfPlayer;
  team->RBI /= numOfPlayer;
  team->bat_average /= numOfPlayer;
}

void outputInfo(player * arr, player team)
{
  team.fName[0] = '\0';
  team.lName[0] = '\0';

  for (int i = 0; i < numOfPlayer; ++i)
  {
    printf("%d %-10s %-10s %d %d %d %d %f \n", arr[i].number, arr[i].fName,
           arr[i].lName, arr[i].bats, arr[i].hits, arr[i].walks,arr[i].RBI,
           arr[i].bat_average);
  }
  printf("TEAM:%d %d %d %d, %f \n", team.bats, team.hits, team.walks, team.RBI, team.bat_average);
}