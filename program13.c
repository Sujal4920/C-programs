#include <stdio.h>
int main()
{
    float units,total,bill;
    scanf("%f", &units);
    if(units>=0 && units<=50)
      bill=units*2.50;
     else if(units>50 && units<=150)
     {
        bill=125+(units-50)*2.75;
     } 
     else if(units>150 && units<=250)
     {
         bill=125+275+(units-150)*4.20;
     }
     else if(units>250)
     {
         bill=125+275+420+(units-250)*4.50;
     }
     total= bill+bill*10/100;
     printf("%.2f",total);
    return 0;
}
