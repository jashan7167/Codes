#include<stdio.h>

int gcd(int ,int );
int main()
{
    int n1,n2,cf;
    printf("Enter the no of which you want to find the gcd of:\n");
    scanf("%d %d",&n1,&n2);

cf=gcd(n1,n2);
printf("GCD = %d",cf);
}

int gcd(int a , int b )
{
    if(b==0)
    {
        return(a);
    }
    else
    {
    if(a<b)
    {
return(gcd(b,a));
    }
else
 return(gcd(b,a%b));
    }
}
