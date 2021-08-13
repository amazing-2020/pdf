#include <stdio.h>
#include <stdlib.h>
void hello()
{
    printf("Hello callback! \n");
}
int Exec(void (*func)())
{
    (*func)();
}

int main()
{
    Exec(hello);

    return 0;
}