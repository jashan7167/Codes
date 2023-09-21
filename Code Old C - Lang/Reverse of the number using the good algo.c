#include<stdio.h>

int main()
{
    int number,r,sum=0;
    printf("Enter the number which you want to reverse:\n",&number);
    scanf("%d",&number);

    while(number>0)
    {
       r=number%10;
       sum=sum*10 + r;
       number=number/10;
    }
    printf("Reverse of the number is %d",sum);
}