#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n%2!=0)
    {
    while(n<=m)
    {
      printf("%d ",n);
      n+=2;
    }
    }
    else if(n%2==0)
    {
        n+=1;
       while(n<=m)
       {
           printf("%d ",n);
           n+=2; 
       }
    }
    return 0;
}