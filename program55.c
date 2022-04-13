#include <stdio.h>
int main()
{
    int a[10], b[10], i, j, c = 0, n = 7;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        c = 1;
        if (a[i] != -1)
        {
            for (j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    c++;
                    a[j] = -1;
                }
            }
            b[i] = c;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != -1)
        {
            printf("%d-%d\n", a[i], b[i]);
        }
    }

    return 0;
}