#include <stdio.h>

static float f = 1;
float sumofseries(int n);
float sumofseries(int n)
{
    float sum;
    if(n==0)
    {

        return 0;
    }
    else{

    
 sum = sumofseries(n-1);
 f = f * n;
 
 return (sum + n/f);
    }
}
int main()
{
    float s;
    int num;
    scanf("%d",&num);
    printf("%d\n",num);
    s = sumofseries(num);
    printf("%1.2f",s);
}
