#include <stdio.h>

int main()
{
int a;
  int b;
  int H;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
  
  for(H=a<b?a:b;H>=1;H--)
  {
      if(a%H==0 && b%H==0)
      {
          printf("HCF is %d",H);
    break;
      }
      

  }
}