//check number is perfect square or not
#include <stdio.h>
int main()
{
     int i,flag=0,n;
     n=16;
  for(i=1;i<n;i++)
  {
    if(i*i==n){
     flag=1;
    break;
    }
  }  
    if(flag==1)
      printf("yes");
    else
      printf("no");
      return 0;
}    