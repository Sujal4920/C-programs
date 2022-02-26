#include<stdio.h>
int verifyPrime(int n){
  int i,T=0;
  for(i=2;i<=n/2;i++)
  {
    if(n%i==0)
    T++;
    break;
  }
  if(T!=0)
  {
  return 0;
  }
  else{
    return 1;
  }
}
int main()
{
    int n,p;
    scanf("%d",&n);
    p=verifyPrime(n);
    if(p==1)
    printf("prime");
    else
    printf("not prime");
}