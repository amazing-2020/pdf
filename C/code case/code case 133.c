#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "zara Ali");

    description = (char *)malloc(30 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error = unable to allocate requried memory. \n");
    } else {
        strcpy(description, "zara ali a DPS student.");
    }
    description = (char *)realloc( description,100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate requried memory. \n");
    } else {
        strcat( description, "She is in class 10th");
    }
    printf("Name = %s \n", name);
    printf("Description: %s \n", description);

    free(description);
}