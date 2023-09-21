#include<stdio.h>

int factors(int );

int main()
{
    int num;

    
    printf("Enter the number which you want to check");
    scanf("%d",&num);

    factors(num); 
}

int factors(int n)
{
    int i;
    int f;
printf("Factors :");
    for(i=2;i<n;i++)
    {
        
      if(n%i==0)
      {
       f=i;
       printf("%d\t",f);
      }
      else
      { 
      continue;
      }
    }
}