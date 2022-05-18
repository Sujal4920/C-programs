//verify prime or not
#include <stdio.h>
#include <math.h>
int verifyPrime(int n)
{
    int i, flag = 1;
    for (i = 2; i <=n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (n <= 1)
        flag = 0;
    if (flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, p;
    scanf("%d", &n);
    p = verifyPrime(n);
    if (p == 1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}