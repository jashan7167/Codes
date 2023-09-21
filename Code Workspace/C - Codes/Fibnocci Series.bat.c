#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no upto which you want to print the fibnocci series");
    scanf("%d",&n);

    int a=0;
    int b=1;
    int c;

    for(int i=0;i<=n;i++)
    {
          a=b;
        c=a+b;
        b=c;
        printf("%d\n",a);
    }
}