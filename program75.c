#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,m,j,r=0;
  scanf("%d",&j);
  while(j!=0)
  {
    scanf("%d",&n);
    m=n;
    r=0;
    while(n!=0)
    {
      r=(r*10)+(n%10);
      n=n/10;
    }
    if(m==r)
      printf("Equal\n");
    else
      printf("Not Equal\n");
    j--;
  }
    return 0;
}