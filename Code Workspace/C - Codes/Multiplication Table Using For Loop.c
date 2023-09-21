#include<stdio.h>

int main()
{
    int num;
    printf("Enter the no of which you want to write the multiplication table");

scanf("%d",&num);
int prod=0;
for(int i=1;i<=10;i++)
{
    prod=num*i;
    printf("%d\n",prod);
    prod=0;
}
}