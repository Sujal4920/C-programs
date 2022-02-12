#include <stdio.h>
int main()
{
    int n;
  scanf("%d",&n);  
  printf("%d",n/2000);
  n=n%2000;
  printf("%d",n/500);
  n=n%500;
  printf("%d",n/100);
  n=n%100;
  printf("%d",n/50);
  n=n%50;
  printf("%d",n/20);
  n=n%20;
  printf("%d",n/10);
  n=n%10;
  printf("%d",n/5);
  n=n%5;
  printf("%d",n/2);
  n=n%2;
  printf("%d",n/1);
    return 0;
}