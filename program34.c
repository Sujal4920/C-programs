#include <stdio.h>
int main()
{
    int N,n,r,sum;
     scanf("%d",&N);
     while(N>0)
     {
       scanf("%d",&n);
       sum=0;
       while(n!=0)
       {
         r=n%10;
         sum=sum+r;
         n=n/10;
       }
       printf("%d\n",sum);
       N--;
    }
    return 0;
}