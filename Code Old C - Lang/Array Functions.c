#include<stdio.h>


float average(float arr[],float av,int num);

int main()
{
   int n;
  
   float ave;
   float a;
   scanf("%d",&n);
float A[100];
   if(n>=0 && n<=100)
   {
      a=average(A,ave,n);
      printf("Average = %2.2f",a); 
   }
   else 
   printf("Error number should be in the range of 1 to 100");
}
float average(float arr[],float av,int num)
{
    int i;
   for(i=0;i<num;i++)
   {
       scanf("%f",&arr[i]);
   }
   float sum=0;
   for(i=0;i<=num;i++)
   {
       sum=sum+arr[i];
   }
   av=sum/num;
   return av;
}

