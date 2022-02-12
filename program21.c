#include <stdio.h>
int main()
{
    float a, b, sum;
    char op;
    scanf("%f %c %f", &a,&op,&b);
    //scanf("%c", &op);
    //scanf("%f", &b);

    switch (op)
    {
     case '+':
        printf("%.2f",a+b);
      break;
      case '-':
        printf("%.2f",a-b);
        break;
      case '*':
        printf("%.2f",a*b);
        break;
      case '%':
        printf("%.2f",a/b);
        break;
    }

    return 0;
}