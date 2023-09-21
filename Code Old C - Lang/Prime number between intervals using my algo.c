#include<stdio.h>


int main()
{
    int count=0;
    int num;

    printf("Enter the no upto which you want to print the prime numbers:\n");
    scanf("%d",&num);

    for(int i=2;i<=num;i++)
    {
        for(int k=1;k<=i;k++)
        {
            if(i%k==0)
            {
                count++;
            }
        }
            if(count==2)
            {
                printf("%d\n",i);
            }
            count=0;
    }
}