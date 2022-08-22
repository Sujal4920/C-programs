#include <stdio.h>
int howManyDuplicates(int n, int arr[]) {
    int ar[n];
    int count = 0;
    for (int i = 0; i < n;i++)
    {
        int flag = 0;
        for (int j = 0; j < n;j++)
        {
            if (arr[i] == arr[j]) {
                flag++;
            }
        }
        if (flag > 1) {
            ar[count++] = arr[i];
        }
    }
    int unq = 1, k, m;
    for (k = 0; k < count; k++) {
        for (m = 0; m < count; m++) {
            if (ar[k] == ar[m])
            break;
        }
        if (m == k) {
            ++unq;
        }
    }
    return unq - 1;
}

int main()
{
    int res, i;
    int arr[] = {1,2,1,3,4,5,6,5,7}; 
    res = howManyDuplicates(9, arr);
    printf("%d", res);
    return 0;
}