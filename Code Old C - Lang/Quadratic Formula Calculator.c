#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float d;
    
    scanf("%f %f %f",&a,&b,&c);
    float root1;
    float root2;
    float realpart;
   float imgpart;
    root1=-b/(2*a) + sqrt(b*b - 4*a*c)/(2*a);
    root2=-b/(2*a) - sqrt(b*b - 4*a*c)/(2*a);
    
    realpart=-b/(2*a);
imgpart=sqrt(-1*(b*b - 4*a*c))/(2*a);
float disc=b*b - 4*a*c;

if(disc>0)
{
    printf("%f is the root 1 and %f is the root 2",root1,root2);
}
else
printf("%f + i%f is the root 1 and %f - i%f is the root 2",realpart,imgpart,realpart,imgpart);
}