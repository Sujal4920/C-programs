//Compare elements of an Array 
#include <stdio.h>
int main()
{
     int arr[10],i,j,count=0;
    for(i=0;i<10;i++)
   {
    scanf("%d",&arr[i]);
   }
   for(i=0,j=10-1;i<j;i++,j--)
   {
     if(arr[i]==arr[j])
       count++;
   }
  if(count==10/2)
  {
    printf("Equal");
  }
  else
    printf("Not Equal");
    return 0;
}