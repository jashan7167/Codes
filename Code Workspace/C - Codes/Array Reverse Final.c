#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array");
scanf("%d",&n);

printf("Enter the elements of an array");
int arr[n];

for(int i = 0 ; i < n; i++)
{
    scanf("%d",&arr[i]);
}
   
    int temp;

    for(int i = 0;i<n;i++)
    {
        if(i == (n - 1 - i ) || i + 1 == (n - 1 - i))
        {
            break;
        }
        else 
        {
        temp = arr[i];
        arr[i] = arr[(n - 1)- i];
        arr[(n  - 1) - i] = temp;
        }
    }
for(int i = 0;i< n;i++)
{
    printf("%d\t",arr[i]);
}
}