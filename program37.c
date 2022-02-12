#include <stdio.h>
int main()
{
    int n,num,c,pal,rem,count=0,temp,mul=1;
   scanf("%d",&n);
   num=n;
   temp=n;
   while(n>0)
   {
     n=n/10;
     count++;
   }
  c=count;
  pal=0;
  while(temp>0)
  {
   rem=temp%10;
    while(c>0)
    {
      mul=mul*rem;
      c--;
    }
    pal=pal+mul;
    c=count;
    temp=temp/10;
    mul=1;
  }
  if(num==pal)
    printf("yes");
  else
    printf("no");
    return 0;
}