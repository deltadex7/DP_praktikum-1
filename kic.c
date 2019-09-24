#include <stdio.h>

int main(int argc, char const *argv[])
{
    long a, b, n;
    scanf("%ld %ld %ld", &a, &b, &n);
    
    long sum = 0;
    long i = a, j = b;
    while (i < n || j < n)
    {
        if (i < j) {
            sum += i;
            i += a;
        } else {
            sum += j;
            if(i == j) i += a;
            j += b;
        }
        
    }
    
    printf("%ld\n", sum);
    return 0;
}
