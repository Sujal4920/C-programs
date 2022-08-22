//Rotate a list in array
#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int test,N,n,arr[50],i,R,temp;
  scanf("%d",&test);
  while(test>0){
  scanf("%d",&N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&arr[i]);
  }
  scanf("%d",&R);
    while(R>0)
    {
      temp=arr[0];
      for(i=0;i<N;i++)
      {
        arr[i]=arr[i+1];
      }
      arr[N-1]=temp;
      R--;
    }
    for(i=0;i<N;i++)
    {
      if(i<N-1)
      printf("%d ",arr[i]);
      if(i==N-1)
        printf("%d",arr[i]);
    }
    printf("\n");
    test--;
  }
    return 0;
}