#include<stdio.h>

int main()
{
    int n[3][3]={{2,4,3},{6,8,5},{3,5,1}};
int num;
scanf("%d",&num);
int *p;
p=n;
printf("%d",*(p + (num -1)));

}