#include <stdio.h>
int threeConsecutive(int a, int b, int c)
{
    int max,min,mid;
  max=a>b?(a>c?a:c):(b>c?b:c);
  min=a<b?(a<c?a:c):(b<c?b:c);
  mid=a+b+c-max-min;
  return max==mid+1 && mid=min+1;
}
int main()
{
   int T, a, b,c;
   scanf("%d",&T);
   while(T--)
   {
      scanf("%d",&a);
      scanf("%d",&b);
      scanf("%d",&c);
     
     printf("%d\n",threeConsecutive(a, b, c));
   }
  
    return 0;
}
