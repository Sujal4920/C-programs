#include <stdio.h>
#include<string.h>
int main() 
{
  char str[50],ch;
  int i,len,max=0;
  int freq[256]={0};
  scanf("%s",&str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    freq[str[i]]++;
  }
  for(i=0;i<len;i++)
  {
    if(max<freq[str[i]])
    {
      max=freq[str[i]];
      ch=str[i];
    }
  }
  printf("%c",ch);
  return 0;
}