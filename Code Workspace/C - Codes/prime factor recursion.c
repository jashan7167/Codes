#include<stdio.h>
static int i = 2;
int primefactors(int n);
int primefactors(int n)
{
    if(i==n)
    {
      return 0;
    }
int count = 0;
int j = 2;
while(j<i)
{
if(i%j == 0)
{
 count++;
}
j++;
}
if(count == 0)
{
     printf("%d is a prime factor",i);
    
}
i++;
primefactors(i);
   }
   

int main()
{
int num;

printf("Enter the no of which you want to find the prime factors of");
scanf("%d",&num);

primefactors(num);
return 0;
}