#include<stdio.h>

int main()
{
    int arr[4],i,j;
   int rotate;
   scanf("%d",&rotate);
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp=0;
for(i=0;i<rotate;i++)
{
    temp = arr[0];
    for(j=0;j<5;j++)
    {
        arr[j]=arr[j+1];
    }
    arr[4]=temp;
}
    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}