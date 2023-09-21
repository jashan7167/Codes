#include<stdio.h>

void accesselements(int *p,int num);
int main()
{
int n;
printf("Enter The No Of Elements Of An Array:\n");
scanf("%d",&n);
int arr[n];
printf("Enter The  Elements Of An Array:\n");
for(int i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
accesselements(arr,n);
}

void accesselements(int *p,int num)
{
    printf("Elements Are:\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\n",*p);
        p++; //dont use *p as it will increment the value present at that address
    }
}
