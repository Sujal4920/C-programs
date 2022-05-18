#include <stdio.h>
#include<string.h>
int main() 
{
  char str[50];
  int digit=0,ch=0,len,i;
  scanf("%s",&str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    if(str[i]>='a'&& str[i]<='z'||str[i]>='A'&& str[i]<='Z')
      ch++;
    else if(str[i]>='0'&& str[i]<='9')
      digit++;
  }
  printf("%d %d",ch,digit);
  return 0;
}