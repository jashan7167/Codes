#include<stdio.h>

int main()
{
    int number;

    printf("Enter The Number Of Which You Want To Print The Factors Of:\n");
    scanf("%d",&number);

    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            printf("%d\n",i);
        }
    }
}