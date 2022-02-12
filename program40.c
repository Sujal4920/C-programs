#include <stdio.h>
int main()
{
  int n,a=0,b=1,c,i;
    scanf("%d",&n);
    if(n==1){
    printf("%d\n",a);
    }
    else if (n>1)
    {
    printf("%d\n",a);
    printf("%d\n",b);
    for(i=3;i<=n;i++)
    {
      c=a+b;
      printf("%d\n",c);
      a=b;
      b=c;
    }
    }
  return 0;
}