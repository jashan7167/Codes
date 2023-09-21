#include <stdio.h>

int biggest_of_two(int *x , int *y);
int biggest_of_three(int *e ,int *f ,int *g);
int main(void)
{
  int a;
  int b;
  int c;
  scanf("%d%d%d", &a,&b,&c);
  int *p;
    int *u;
  *p=biggest_of_two(&a,&b);
  printf("The biggest of %i and %i is %i\n", a, b, *p);
  *u=biggest_of_three(&a,&b,&c);
  printf("The biggest of %i, %i and %i is %i\n", a, b, c, *p);
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
int biggest_of_three(int * e, int * f, int * g)
{
 if(*e>=-100 && *e<=100)
 {
     if(*e>*f)
     {
         if(*e>*g)
         {
            return *e;
         }
         else
             return *g;
     }
     if(*f>*g)
     {
         return *f;
     }
     else
         return *g;
 }
    else if(*f>=-100 && *f<=100)
    {
         if(*e>*f)
     {
         if(*e>*g)
         {
            return *e;
         }
         else
             return *g;
     }
     if(*f>*g)
     {
         return *f;
     }
     else
         return *g;
    }
    else if(*g>=-100 && *g<=100)
    {
         if(*e>*f)
     {
         if(*e>*g)
         {
            return *e;
         }
         else
             return *g;
     }
     if(*f>*g)
     {
         return *f;
     }
     else
         return *g;
    }
    else
        printf("Outside the range");
}
