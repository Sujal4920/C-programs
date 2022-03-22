//program to make entered single digit into a number
 #include <stdio.h>
int main()
{
    int n,m,num=0;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&m);
        num=num*10+m;
        n--;
    }
    printf("%d",num);

    return 0;
}