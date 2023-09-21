#include<stdio.h>

void leftRotate(int a[4],int d);
int main()
{
int arr[4];
int rotate;
for(int i=0;i<5;i++)
{
    scanf("%d",&arr[i]);
}
scanf("%d",&rotate);
leftRotate(arr,rotate);
return 0;
}
void leftRotate(int a[4],int d)
{
 int temp=a[0],i
    
        for(i=0;i<4;i++)
        {
             
            a[i]= a[i+1];
        }
        a[4] = temp;
    
    for(int k=0;k<5;k++)
    {
        printf("%d\t",a[k]);
    }
} 
 

