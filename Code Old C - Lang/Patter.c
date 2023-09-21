#include <stdio.h>

int main()
{

    int num;
    printf("Enter the no of rows and columns you want to print");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
     for(int k=1;k<=2*i-1;k++)
     {
         printf("*");
     }
     printf("\n");
    }
}