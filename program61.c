#include <stdio.h>
int main()
{
    int arr[30];
    int i, j, k, temp, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (k = i; k < n; k++)
        {
            if (arr[k] < 0)
            {
                temp = arr[k];
                for (j = k; j < n-1; j++)
                {
                    arr[j] = arr[j + 1];
                }
                arr[n - 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}