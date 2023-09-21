#include <stdio.h>

int hcf(int n1,int n2);
int main() {
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
  	if(n1>=0 && n1<=1000){
   printf("GCD = %d", hcf(n1, n2)); 
    }
    else if(n1>=-1000 && n1<0)
    {
        n1=-n1;
        printf("GCD = %d", hcf(n1, n2)); 
    }
    else if(n2>=-1000 && n2<0)
    {
        n2=-n1;
        printf("GCD = %d", hcf(n1, n2));
    }
    else if(n1>0 && n2<=1000)
    {
        printf("GCD = %d", hcf(n1, n2));
    }
  	else{
      printf("Outside the range");
    }
    return 0;
}

int hcf(int a,int b) {
 
    int cf;
    int result;
    for(cf=a<b?a:b;cf>=1;cf--)
    {
        if(a%cf==0 && b%cf==0)
        {
          result=cf;
        }
    }
    return(result);
}