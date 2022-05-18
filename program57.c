//generate and print prime numbers according to given rage and number
#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
        for (i = 1; i <= n; i++)
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    break;
            }
            if (j == i && m>0)
            {
                printf("%d\n", i);
                m--;
            }
        }
    return 0;
}