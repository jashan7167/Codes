#include<stdio.h>

int main()
{
int n,max1,max2;

printf("Enter The No Of Elements Of An Array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter The  Elements Of An Array:\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

max1=arr[0];
for(int i=0;i<n;i++)
{
    if(max1<arr[i])
    {
        max2=max1;
        max1=arr[i];
    }
    else if(max2<arr[i] && arr[i]!=max1)
    {
        max2=arr[i];
    }
    else
    continue;
}
printf("Largest Element = %d and Second Largest Element = %d",max1,max2);
}

