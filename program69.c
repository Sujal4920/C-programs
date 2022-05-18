#include <stdio.h>
int main()
{
    char str[50];
    int vowel = 0, conso = 0, i = 0;
    scanf("%s", &str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowel++;
        else
            conso++;
        i++;
    }
    printf("%d %d", vowel, conso);
    return 0;
}