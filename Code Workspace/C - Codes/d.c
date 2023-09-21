#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float series(int );
float series(int n)
{
    if(n == 0)
    {
        return;
    }
    int f = 1;
    for(int i = 1;i<=n;i--)
    {
        f = f * i;
    }
    

 return series(n-1) + n/f;
    
}
int main() {
int num;
    scanf("%d",&num);
    float sum = series(num);
    printf("%1.2f",sum);
    return 0;
}
