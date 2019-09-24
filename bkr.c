/**
 * cannot compile here, but accepted on the judge. WTF?
 * */
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i;
    scanf("%d", &i);

    while (i > 0)
    {
        long a, b;
        scanf("%ld %ld", &a, &b);
        double res = sqrt(a*a + b*b);
        printf("%.3lf\n", res * 2);
        --i;
    }
    
    return 0;
}
