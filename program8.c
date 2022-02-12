#include <stdio.h>
int main()
{
    int n, i, j, k = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % 2 == 0)
        {
            if (i <= n / 2)
                k++;
            if (i > (n / 2) + 1)
                k--;
        }
        else
            i <= (n + 1) / 2 ? k++ : k--;

        for (j = 1; j <= (n + 1) / 2; j++)
        {
            if ((j <= k))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}