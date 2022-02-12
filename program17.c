#include <stdio.h>
/* Include other headers as needed */
int main()
{
      int year;
      scanf("%d",&year);
      if((year%400==0) || (year%100!=0 && year%4==0))
      {
        printf("Leap Year");
      }
     else
       printf("Not a Leap year");   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}