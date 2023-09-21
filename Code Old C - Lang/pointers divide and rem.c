#include<stdio.h>

void rem_div(int ,int ,int *,int *);

int main()
{
    int a;
    int b;
    int div=0;
    int rema=0;

   scanf("%d%d",&a,&b);
   rem_div(a,b,&div,&rema);
   printf("%d divided by %d is %d and remainder is %d",a,b,rema,div);

}
void rem_div(int x,int y,int *rem,int *divides)
{
 *divides=x/y;
 *rem=x%y;
 
}