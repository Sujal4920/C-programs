#include <stdio.h>
#include<string.h>
int main() 
{
  int cmp;
  char str[100],str1[100];
  scanf("%s %s",&str,&str1);
  cmp=strcmp(str,str1);
  if(cmp==0)
    printf("Equal");
  else if(cmp<0)
    printf("Small");
  else
    printf("Large");
  return 0;
}