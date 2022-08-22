#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int n, i, num, num1, add, sum, count;
    scanf("%d", &n);
    while (n != 0)
    {
        scanf("%d", &num);
        num1 = num;
        count = 0;
        while (num1 != 0)
        {
            num1 = num1 / 10;
            count++;
        }
        sum = 1;
        for (i = 1; i < count; i++)
        {
            sum = (sum * 10) + 1;
        }
        //add = num + sum;
        printf("%d\n", (num+sum));
        n--;
    }
    return 0;
}