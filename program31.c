#include <stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
      printf("%c ",96+i);
      i++;
    }
    return 0;
}