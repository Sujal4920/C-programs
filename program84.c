#include <stdio.h>
int howManyDuplicates(int n, int arr[])
{
    int temp[n];
    int count = 0;
    for(int i =0;i< n;i++){
        int element = arr[i];
        int flag = 0;
        for (int j = 0; j< n ; j++){
            if(temp[j] == element) {
                flag = 1;
                break;
            }
        }
        if(flag) {
            continue;
        }
        for(int j = i + 1; j <n;j++){
            if(arr[j] == element) {
                temp[count++] = element;
                break;
            }
        }
    }
    return count;
}
int main()
{
    int res, i;
    int arr[] = {1, 2, 1, 3, 1, 5, 6, 5, 7};
   // res = howManyDuplicates(9, arr);
    printf("%d", howManyDuplicates(9, arr));
    return 0;
}