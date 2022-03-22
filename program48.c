//program to get diameter and area 
#include <stdio.h>
float getDiameter(float n)
{
  float d;
  d=2*n;
  printf("%.2f\n",d);
}
float getArea(float n)
{
  float area;
  area=3.14159*n*n;
  printf("%.2f",area);
}
int main()
{
    int n;
    scanf("%d",&n);
    getDiameter(n);
    getArea(n);
    return 0;
}