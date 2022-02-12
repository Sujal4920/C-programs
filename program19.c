#include <stdio.h>
int main()
{
    int a,b,c,lg;
   scanf("%d%d%d",&a,&b,&c);
   lg=a;
  if(b>lg)
    lg=b;
  if(c>lg)
    lg=c;
  printf("%d",lg);
    return 0;
}