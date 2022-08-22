#include <stdio.h>
int verifyPrime(int n) {
   int i,flag=1;
   for(i=2;i<n;i++)
   {
     if(n%i==0)
     {
       flag=0;
       break;
     }
   }
  if(n<=1)
    flag=0;
  if(flag==1)
    return 1;
  else
    return 0;
}
int main()
{
    int T, no;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &no);

        if (verifyPrime(no))
            printf("PRIME\n");
        else
            printf("NOT PRIME\n");
    }
    return 0;
}