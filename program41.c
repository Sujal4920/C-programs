#include <stdio.h>
#include <string.h>
void printstr(char S[])
{
    int i=0;
    while(S[i]!='\0')
    {
        printf("%c",S[i]);
        i++;
    }
}
int main()
{
    char str[20];
    gets(str);
    //scanf("%[^\n]s",&str);
    puts("hello ");
    printstr(str);
    return 0;
}