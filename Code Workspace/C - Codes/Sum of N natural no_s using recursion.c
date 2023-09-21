#include<stdio.h>


int recursion(int n);



int main()
{
int num,sum;
printf("Enter the no upto which you want to find the sum\n");
scanf("%d",&num);
sum=recursion(num);
printf("%d",sum);
}

int recursion(int n)
{
    if(n!=0)
    {
   return n + recursion(n-1);
    }
   else
   return n;
    
}
