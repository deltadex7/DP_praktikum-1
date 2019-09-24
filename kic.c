#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, n;
    scanf("%d %d %d", &a, &b, &n);
    
    int sum = 0;
    int i = a, j = b;
    while (i <= n && j <= n)
    {
        if (i < j) {
            //if (i != j)
                sum += i;
            i += a;
        } else {
            sum += j;
            j += b;
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
