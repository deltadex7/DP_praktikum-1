#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, n;
    scanf("%d %d", &a, &b);
    scanf("%d", &n);
    while (n > 0)
    {
        for (int i = 0; i < a; i++)
            printf("^");
        printf("\n");
        
        a += b;
        --n;
    }

    return 0;
}
