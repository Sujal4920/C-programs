#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (i = 2; i <= j; i++)
            if (j % i == 0)
                break;

        if (i == j)
            printf("%d\n", j);
    }
    return 0;
}