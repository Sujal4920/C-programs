#include <stdio.h>
void removeDuplicates(int *arr, int *size)
{
  int *i,*j,*k;
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        for(k=j;k<size;k++)
        {
          arr[k]=arr[k+1];
        }
        size--;
        j--;
      }
    }
  }
 for(i=0;i<size;i++)
 {
   printf("%d\n",*arr);
   arr++;
 }
}
int main()
{ 
    int arr[30];
    int i, j, k,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    removeDuplicates(arr,&n);
    return 0;
}