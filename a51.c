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


int main(int argc, char const *argv[])
{
    long n;
    scanf("%ld", &n);

         /* Result */
    long long res = 0ll,
         /* Square modifier (mod^2) */
              mod = 1;

    while (n > 0)
    {
        res += (mod * mod) * (n % 2);
        n /= 2; mod *= 2;
    }
    

    printf("%lld\n", res);
    return 0;
}
