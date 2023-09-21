#include<stdio.h>



int leap_year(int );

int main()
{
   int year;
   int check;

   printf("Enter the year which you want to check");
   scanf("%d",&year);
check=leap_year(year);
if(check==0)
{
    printf("Leap Year");
}
else
printf("NOT LEAP YEAR");
}

int leap_year(int yr)
{
    if(yr%400==0)
    {
        return 0;
    }
    else 
    return 1;
}