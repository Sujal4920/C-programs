#include <stdio.h>
int main()
{
     int n,m,i=1;
      scanf("%d%d",&n,&m);
      while(i<=m)
      { 
        printf("%d\n",n*i);
        i++;
      }
    return 0;
}