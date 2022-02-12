#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    //if((c=='a'||c=='A') ||(c=='e'||c=='E') )
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a vowel", c);
        break;
    default:
        printf("Consonent");
    }
    return 0;
}