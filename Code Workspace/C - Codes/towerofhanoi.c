#include <stdio.h>
void towerofhanoi(int n,int a,int b,int c);
void towerofhanoi(int n,int a, int b,int c)
{
    if(n>0)
{
    towerofhanoi(n-1,a,c,b);
    printf("move disc from %d to %d\n",a,c);
    towerofhanoi(n-1,b,a,c);
}
}

int main()
{
    int n;
    scanf("%d",&n);
int a = 1;
int b = 2;
int c = 3;

    towerofhanoi(n,a,b,c);
}