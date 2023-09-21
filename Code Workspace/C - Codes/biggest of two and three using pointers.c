#include <stdio.h>

int biggest_of_two(int *,int *);
int biggest_of_three(int *,int *,int *);
int main(void)
{
  int a;
  int b;
  int c;
  scanf("%d%d%d", &a,&b,&c);
  int *p;
  if(  (a>-100 && a<100) &&  (b>-100 && b<100) &&   (c>-100 && c<100))
  {
*p = biggest_of_two(&a,&b);
  printf("The biggest of %i and %i is %i\n", a, b, *p);
  *p = biggest_of_three(&a,&b,&c);
  printf("The biggest of %i, %i and %i is %i\n", a, b, c, *p);
  }
  else 
  {
  printf("Outside the range");
  }
  return 0;
}
int biggest_of_two(int *x,int *y)
{
     if(*x>*y)
     {
         return *x;
     }
     else 
     return *y;
  }

int biggest_of_three(int * p, int * q, int * r)
{
      if(*p>*q)
      {
         if(*p>*r)
         {
             return *p;
         }
         else
         return *r;
      }
       else if(*q>*r)
       {
           return *q;
       }
       else 
       return *r;
           
       }

      
  
