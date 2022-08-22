#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,m,sum=0;
  scanf("%d",&n);
  while(n!=0)
  {
    scanf("%d",&m);
    sum=sum+m;
    n--;
  }
  printf("%d",sum);
    return 0;
}