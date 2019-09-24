/****
 * 1 (2^1)
 * 4 (2^2)
 * 5 (1+4)
 * 16 (2^4)
 * 17 (16+1)
 * 20 (16+4)
 * 21 (16+4+1)
 * 64 (2^8)
 * 
 * */

#include <stdio.h>

long square(long e);
long sumpow(long n);

int main(int argc, char const *argv[])
{
    long n;
    scanf("%ld", &n);
    printf("%ld\n", sumpow(n));
    return 0;
}

long square(long e)
{
    return e * e;
}

long sumpow(long n)
{
    long sum = 0, mod = 1;
    while (n > 0)
    {
        
    }
    return sum;
}