#include <stdio.h>
int main()
{
  int arr[10][10],m,i,j,sum=0;
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
    for(j=0;j<m;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<m;i++)
  {
    //for(j=0;j<m;j++)
   // {
      //if(i==j)
      {
        sum=sum+arr[i][i];
      }
   // }
  }
  printf("%d",sum);
  return 0;
}