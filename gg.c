#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    long res = 0;
    scanf("%d", &n);

    while (n > 0)
    {
        long i = 0;
        scanf("%ld", &i);
        res += i * ((i%2)? -1 : 1);
        --n;
    }
    
    printf("%d\n", res);
    return 0;
}
