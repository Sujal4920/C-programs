#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,m,count=0;
  scanf("%d",&n);
  while(n!=0)
  {
    scanf("%d",&m);
    if(m>=50)
      count++;
    n--;
  }
  printf("%d",count);
    return 0;
}