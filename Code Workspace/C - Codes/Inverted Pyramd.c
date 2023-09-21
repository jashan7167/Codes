#include<stdio.h>

int main()
{
    int num;
    printf("Enter the no of rows you want");

scanf("%d",&num);

for(int i=0;i<num;i++)
{
    for(int j=num;j>=i;j--)
    {
        printf("*");
    }
    printf("\n");
}
}