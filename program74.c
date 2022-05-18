#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,num,rev=0,num2;
  scanf("%d",&n);
  while(n>0){
    scanf("%d",&num);
    num2=num;
    while(num2>0)
    {
      rev=(rev*10)+(num2%10);
      num2=num2/10;
    }
    if(num==0||num==1)
      printf("Equal\n");
    else if(num==rev)
      printf("Equal\n");
    else
      printf("Not Equal\n");
    n--;
  }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}