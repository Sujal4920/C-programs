#include <stdio.h>
int main()
{
    int days;
     scanf("%d",&days);
     if(days>0 && days<=3)
       printf("10");
     if(days>3 && days<=10)
       printf("20");
     if(days>10 && days<=30)
       printf("50");
     if(days>30)
       printf("Membership cancelled");
    return 0;
}