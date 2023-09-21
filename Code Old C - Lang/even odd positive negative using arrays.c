#include<stdio.h>


int main()
{
    int A[25];
    int i;

    printf("Enter the numbers");

    for(i=0;i<25;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<=25;i++)
    {
        if(A[i]%2==0)
        {        
            printf("%d is EVEN\n",A[i]);
        }
        else
        printf("%d is Odd\n",A[i]);
    }
    for(i=0;i<25;i++)
    {
        if(A[i]>0)
        {
            printf("%d is POSITIVE\n",A[i]);
        }
        else
        printf("%d is NEGATIVE\n",A[i]);
    }
}