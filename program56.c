//even and odd in two different array
#include <stdio.h>
int main()
{
    int a[8], even[8], odd[8], ev = 0, od = 0, i;
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 8; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[ev++] = a[i];
        }
        else
        {
            odd[od++] = a[i];
        }
    }
    printf("Even:");
    for (i = 0; i < ev; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\nOdd:");
    for (i = 0; i < od; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}