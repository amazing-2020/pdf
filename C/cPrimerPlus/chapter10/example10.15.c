#include <stdio.h>
void zippo1(void);
void zippo2(void);

int zippo[4][2] = {{4, 2}, {6, 8}, {1, 3}, {5, 7}};

int main(void)
{
    zippo1();
    zippo2();

    return 0;
}

void zippo1(void)
{
    printf("   zippo = %p,    zippo + 1 = %p \n", zippo, zippo + 1);
    printf("zippo[0] = %p, zippo[0] + 1 = %p \n", zippo[0], zippo[0] + 1);
    printf("  *zippo = %p,   *zippo + 1 = %p \n", *zippo, *zippo + 1);
    printf("zippo[0][0] = %d \n", zippo[0][0]);
    printf("  *zippo[0] = %d \n", *zippo[0]);
    printf("    **zippo = %d \n", **zippo);
    printf("        zippo[2][1] = %d \n", zippo[2][1]);
    printf("*(*(zippo + 2) + 1) = %d \n", *(*(zippo + 2) + 1));
}

void zippo2(void)
{
    int (*pz)[2];
    pz = zippo;

    printf("   pz = %p,    pz + 1 = %p \n", pz, pz + 1);
    printf("pz[0] = %p, pz[0] + 1 = %p \n", pz[0], pz[0] + 1);
    printf("  *pz = %p,   *pz + 1 = %p \n", *pz, *pz + 1);
    printf("pz[0][0] = %d \n", pz[0][0]);
    printf("  *pz[0] = %d \n", *pz[0]);
    printf("    **pz = %d \n", **pz);
    printf("        pz[2][1] = %d \n", pz[2][1]);
    printf("8(*(pz + 2) + 1) = %d \n", *(*(pz + 2) + 1));
}