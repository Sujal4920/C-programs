
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[50];
    char s2[50];
    char s3[]="is friend of";
    gets(s1);
    gets(s2);
    strcat(s1,strcat(s3,s2));
    puts(s1);
    printf("\n");
    strupr(s1);
    puts(s1);
    printf("\n");
    strlwr(s1);
    puts(s1);
    return 0;
}