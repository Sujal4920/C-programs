//program to count palindrome number between given range
#include <stdio.h>
int main()
{
    int min,max,i,a,temp,rev,count=0;
    scanf("%d %d",&min,&max);
    for(i=min;i<=max;i++)
    {
      a=i;
      temp=a;
      rev=0;
      while(a!=0)
      {
        rev=rev*10+(a%10);
        a=a/10;
      }
      if(temp==rev)
      {
        count++;
      }
    }
     printf("%d",count);
    return 0;
}