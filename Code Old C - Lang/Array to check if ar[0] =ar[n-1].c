#include<stdio.h>


int main()
{
  int n;
    printf("Enter the no of elements do you want");
    scanf("%d",&n);
    int A[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&A[i]);
    }
    int f=1;
    int g;
    int i;
    for(i=0,g=n-f;i<n;i++,f++)
    {
        
        if(A[i]==A[g])
        {
            printf("Same\n");
        }
        else
        printf("Not Same\n6");
    }
}