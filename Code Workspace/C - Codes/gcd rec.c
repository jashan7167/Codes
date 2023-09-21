#include <stdio.h>

int gcd(int a,int b,int min)
{
if(a%min == 0 && b%min == 0)
{
    return min;
}
else
gcd(a,b,min -1);
}
int main()
{
    int n1;
    int n2;
    int g;
    scanf("%d",&n1);
    scanf("%d",&n2);
    if(n1>n2)
    {
      g = gcd(n1,n2,n2);
    }
    else
    g = gcd(n1,n2,n1);
    printf("%d",g);
}