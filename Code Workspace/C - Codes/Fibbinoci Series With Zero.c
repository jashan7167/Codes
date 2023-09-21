#include<stdio.h>

int main()
{
  int n;
  int a=0;
  int b=1;
  int c;
  printf("Enter the element no upto which you want to print the fibbinoci series: ");
  scanf("%d",&n);

  for(int i=1;i<=n;i++)
{
    
    printf("%d \n",a);
     c=a+b;
    a=b;
    b=c;
}

return 0;
}