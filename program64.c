#include <stdio.h>
int main()
{
  int arr[10][10],n,m,i,j;
  scanf("%d %d",&n,&m);
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",arr[j][i]);
    }
    printf("\n");
  }
  
  return 0;
}