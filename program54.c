//Find Second max in an array
#include <stdio.h>
int main()
{

    int arr[5],i,max,s_max;
    for(i=0;i<5;i++)
    {
      scanf("%d",&arr[i]);
    }
    max=0;
    s_max=arr[0];
    for(i=0;i<5;i++){
      if(arr[i]>max)
      {
        s_max=max;
        max=arr[i];
      }
      else if(arr[i]>s_max && arr[i]!=max)  
        s_max=arr[i];
    }
  printf("%d",s_max);
    return 0;
}