#include <stdio.h>
int howManyDuplicates(int n, int *numbers)
{
    int i, j, count = 0, ct = 0,prev,t=0;
    for (i = 0; i < n; i++)
    {
        count=0;
        for (j = i + 1; j < n; j++)
        {
            if (numbers[i] == numbers[j])
            {
                count++;
            }
        }
            
    }
    return count;
}
int main()
{
    int a[10], i, r, n = 8;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    r = howManyDuplicates(n, a);
    printf("\n %d", r);
    return 0;
}