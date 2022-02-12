#include <stdio.h>
int main()
{
    int n,m,i=1,count=0;
    printf("Enter total number of subjects: ");
    scanf("%d",&n);
    while(i<=n)
    {  
        printf("Enter marks in subject %d: ",i);
        scanf("%d",&m);
        if(m>=50)
        {
          count++;
        }
        i++;
    }
    printf("%d",count);



    return 0;
}