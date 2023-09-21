#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
static int b=0,i=1;
 int binarynum(int n);
int main() {
int num,binary;
    scanf("%d",&num);
binary = binarynum(num);
  printf("%d",binary);

    return 0;
}
int binarynum(int n)
{
    int r;
   if(n==0)
   {
       return b;
   }
    else
    {
         r = n%2;
    b = b + r*i;
    i = i * 10;
    binarynum(n/2); 
    }
}

