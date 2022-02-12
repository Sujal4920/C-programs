#include <stdio.h>
int main()
{
    int i, j, k, sum, largest;
    scanf("%d%d%d", &i, &j, &k);
    largest = i;
    sum = j + k;
    if (j > largest)
    {
        largest = j;
        sum = i + k;
    }
    if (k > largest)
    {
        largest = k;
        sum = i + j;
    }
    // printf("largest is %d\n", largest);
    if (sum > largest)
        printf("Valid");
    else
        printf("Not Valid");
    return 0;
}