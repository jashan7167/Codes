#include<stdio.h>

int average(float arr[],int num);//function prototype
int main()
{
int n;
printf("Enter the no of students of which you want to store the marks of:\n");
scanf("%d",&n);

float arr1[n];
for(int i=0;i<n;i++)
{
    scanf("%f",&arr1[i]);
}
 float av=average(arr1,n);//passing the base address of an array
 printf("Average = %f",av);
}

int average(float arr[],int num)
{
    int average=0;
    for(int i=0;i<num;i++)
    {
average=average + arr[i];
    }
    average=average/num;
}