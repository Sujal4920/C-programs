#include <stdio.h>
int main()
{
    float amt;
    scanf("%f",&amt);
    if(amt<=1000)
    {
      printf("%.2f",amt);
    }
    else if(amt>1000 && amt<=5000)
    {
      printf("%.2f",amt-amt*0.05);
    }
    else if(amt>5000 && amt<=10000)
    {
      printf("%.2f",amt-amt*0.10);
    }
    else if(amt>10000)
    {
      if(amt>30000)
      {
        printf("%.2f",amt-amt*0.17);
      }
    else
    {
      printf("%.2f",amt-amt*0.15);
    }
  }
  
    return 0;
}