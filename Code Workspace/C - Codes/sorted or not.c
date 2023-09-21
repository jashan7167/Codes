#include <stdio.h>
void checksorted(int a[],int size );

void checksorted(int a[],int size )
{
    int i;
for(i = 0;i<size;i++)
{
    if(a[i]<a[i+1])
    {
        continue;
    }
    else
    break;

}
if(i==size)
{
    printf("Array is sorted");
}
else
printf("Not Sorted");
}
int main()
{
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array");
      for(int i = 0;i<n;i++)
      {
          scanf("%d",&arr[i]);
      }

  checksorted(arr,n);
    
}