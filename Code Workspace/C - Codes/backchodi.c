#include <stdio.h>

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9}

   
    int temp = 0;

    for(int i = 0;i< 10;i++)
    {
        arr[i] = temp;
        arr[i] = arr[l - i];
        arr[l - i] = temp;
    }
for(int i = 0;i< 10;i++)
{
    printf("%d\t",arr[i]);
}
