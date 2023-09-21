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
    int f=2;
for(int i=1;i<=n;i++)
{
    int g=n-f;
   A[i]=A[g];
    f++;
}
for(int i=0;i<n;i++)
{
 printf("%d\n",A[i]);
}
}
