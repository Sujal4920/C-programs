#include <stdio.h>
int main()
{
    int n, i, j,k=0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            
             j<=(n+1)/2?k++:k--;
        {
            if (j >= k)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}