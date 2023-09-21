#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
   int a,b,c,d,e;
    int result;
    scanf("%d",&n);

   e=n%10;
    d=(n/10)%10;
    c=(n/100)%10;
    b=(n/1000)%10;
    a=(n/10000);
    
    
   result=(int)printf("%d%d%d%d%d",e,d,c,b,a);
    
    if(result==n)
    {
        printf("%d\nSame",result);
    }
    else
        printf("%d\nDifferent",result);
    return 0;
}
