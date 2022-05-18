#include <stdio.h>
/* Include other headers as needed */
int fibrec(int n){
  if(n==1)
    return 0;
  if(n==2)
    return 1;
  else
    return (fibrec(n-1)+fibrec(n-2));
}
int main()
{
   int n,i;
   scanf("%d",&n);
   printf("%d\n",fibrec(n));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}