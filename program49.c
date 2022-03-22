//program for power
#include <stdio.h>
int power(int num, int pow)
{
   int val=1,i;
   if(pow<0)
     return -1;
  if(pow==0)
    return 0;
  else
  {
    for(i=1;i<=pow;i++)
    val=val*num;
    return val;
  }
}
int main()
{
    int n,m,p;
    scanf("%d %d",&n,&m);
    p=power(n,m);
    printf("%d",p);

    return 0;
}