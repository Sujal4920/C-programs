//Binary to octal conversion
#include <stdio.h>
int main()
{
    long int binum, octalnum = 0, j = 1,k=-1;
    scanf("%ld", &binum);
    while(binum>0){
    j=binum%10;
    if(j!=0&&j!=1)
    {
      printf("%d",k);
      break;
    }
    else
    while (binum != 0)
    {
        octalnum = octalnum + (binum % 10) * j;
        j = j * 2;
        binum = binum / 10;
    }
    printf("%lo", octalnum);
    }
    return 0;
}