#include<stdio.h>

int fib(int n);
int main()
{
int number;
printf("Enter the no of terms upto which you want to see the fibinocci series:\n");
scanf("%d",&number);

for(int i=1;i<=number;i++)
{
    printf("%d\t",fib(i));
}
}

int fib(int n)
{
    if(n==1 || n==2)
    {
        return(1);
    }
    else
    return(fib(n-1) + fib(n-2));
}