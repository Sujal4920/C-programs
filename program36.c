#include <stdio.h>
int main()
{
    int n, m, hcf, lcm;
    scanf("%d%d", &n, &m);
       for (hcf = n < m ? n : m; hcf > 1; hcf--)
        {
            if (n % hcf == 0 && m % hcf == 0)
                break;
        }
        lcm = (n * m) / hcf;
        printf("%d", lcm);
  
    return 0;
}