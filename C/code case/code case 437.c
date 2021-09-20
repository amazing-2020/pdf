#include <stdio.h>
unsigned long mod_prime(long n, long *count)
{
    long i = 9;

    while (i % n != 0)
    {
        i = i*10 + 9;
        (*count)++;
    }
    return i;
}
int main(int argc, char const *argv[])
{
    long prime, count = 1;
    unsigned long ret;
    
    printf("Please enter a prime number: ");
    scanf("%ld", &prime);
    ret = mod_prime(prime, &count);
    printf("The prime number %ld could divide %ld the number composed of 9 %lu \n", prime, count, ret);

    return 0;
}
