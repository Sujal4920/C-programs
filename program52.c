//check number is armstrong or not 
#include <stdio.h>
#include<math.h>
int main()
{
  int rem,k,n,count=0,m,arm,num=0;
  n=371;
  m=n;
  arm=n;
  while(n!=0){
  rem=n%10;
  count++;
  n=n/10;
  }  
  while(m!=0)
  {
    k=m%10;
    num=num+pow(k,count);
    m=m/10;
  }
  if(arm==num)
  printf("yes");
  else
    printf("no");

    return 0;
}