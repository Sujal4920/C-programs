#include <stdio.h>
int main()
{
      int n,m,i;
     scanf("%d%d",&n,&m);
     for(i=n;i<=m;i++)
     {
       if(i%15==0)
       {
         printf("CodeQuotient\n");
       }
       else if(i%3==0)
       {
         printf("Code\n");
       }
       else if (i%5==0)
       {
         printf("Quotient\n");
       }
       else
         printf("%d\n",i);
     }
    return 0;
}