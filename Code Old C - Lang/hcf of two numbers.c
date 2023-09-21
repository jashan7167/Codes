#include<stdio.h>

    int main()
{

    int n1,n2;
    
    printf("Enter the numbers of which you want to find the GD of:\n");
    scanf("%d %d",&n1,&n2);
int hcf;
    if(n1>n2)
    {
        hcf=n2;
    }
    else
    hcf=n1;
int cf;
    for(int i=hcf;i>1;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            cf=i;
            break;
        }
    }
    printf("%d is the GD of %d and %d",cf,n1,n2);
}