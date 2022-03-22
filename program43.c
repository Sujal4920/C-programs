#include<stdio.h>
int verifyPrime(int n){
   int i,m;
   m=n;
  for(i=2;i<n;i++)
  {
    if(n%i==0)
      break;
  }
  if(n==i)
  return 1;
  else
  return 0;
}
int main()
{
    int n,m,p;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      scanf("%d",&m); 
    p=verifyPrime(m);
    if(p==1)
    printf("prime");
    else
    printf("not prime");
}