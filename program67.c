#include <stdio.h>
#include<string.h>
/* Include other headers as needed */
int main()
{
  int i=0,count=0;
  char str[100],c;
  fgets(str,sizeof(str),stdin);
  scanf("%c",&c);
  while(str[i]!='\0')
  {
    if(str[i]==c)
      count++;
    i++;
  }
  if(count>0)
    printf("%d",count);
  else
    printf("Not Present");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}