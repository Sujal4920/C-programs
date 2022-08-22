//Square Root Of number
#include <stdio.h>
#include<math.h>
/* Include other headers as needed */
int main()
{
    int T,n;
   scanf("%d",&T);
  while(T>0){
    scanf("%d",&n);
    printf("%.2f",sqrt(n));
    T--;
  }
    return 0;
}