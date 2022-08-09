#include <stdio.h>

void nameWithoutLastName(char *firstname);

int main(void)
{
    char firstName[20] = {0};
    char lastName[20] = {0};
    
    printf("Please enter you firstname and lastname: ");
    scanf("%s", firstName);
    scanf("%s", lastName);
    printf("%s,%s \n", firstName, lastName);
    nameWithoutLastName(firstName);

    return 0;
}


void nameWithoutLastName(char *firstname)
{
    printf("\"%s\"\n", firstname);
    printf("\"%20s\"\n", firstname);
    printf("\"%-20s\"\n", firstname);
    printf("\"%s   \"\n", firstname);
}