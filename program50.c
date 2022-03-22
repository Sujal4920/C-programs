//program to count number of digits
#include <stdio.h>
int main()
{
    int count = 0, rem, n =357464;
    if (n == 0)
    count++;
        while (n != 0)
        {
            rem = n % 10;
            count++;
            n = n / 10;
        }
    printf("%d", count);

    return 0;
}