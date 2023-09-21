#include<stdio.h>

int main()
{
    int A[25];
    int min=A[0];
    printf("Enter the elements");
    
    for(int i=0;i<25;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<25;i++)
    {
        if(min>A[i])
        {
            min=A[i];
        }
    }
printf("Smallest Integer is %d",min);
}