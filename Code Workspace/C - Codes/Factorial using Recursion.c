#include<stdio.h>
fact(int n);
int main()
{
int number,f;
printf("Enter the no of which you want to calculate the factorial of:\n");
scanf("%d",&number);
f=fact(number);
printf("%d",f);
}

fact(int n)
{
    if(n!=0)
    return n * fact(n-1);
    else
    return(1);
}