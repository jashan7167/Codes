#include<stdio.h>
int largest(int arr1[],int num);

int main()
{
int n;
printf("Enter the no of elements of the array:\n");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}

int largest1=largest(&arr[0],n);
printf("%d is the largest no of the array",largest1);
}

int largest(int arr1[],int num)
{
    int max=arr1[0];
    for(int i=0;i<num;i++)
    {
        if(max<=arr1[i])
        {
            max=arr1[i];
        }
        
    }
    return(max);
}