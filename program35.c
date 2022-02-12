#include <stdio.h>
int main()
{
     int n,m,hcf;
   scanf("%d%d",&n,&m);
   if(m<0)
   {
     printf("%d",n*(-1));
   }
  else if(n==0)
  {
    if(m==0)
      printf("%d",n);
    else
    printf("%d",m);
  }
  else if(m==0)
  {
    printf("%d",n);
  }
  else if(m>0)
  {
    for(hcf=n<m?n:m;hcf>=1;hcf--)
    {
      if(n%hcf==0 && m%hcf==0)
        break;
    }
    printf("%d",hcf);
  }
    return 0;
}