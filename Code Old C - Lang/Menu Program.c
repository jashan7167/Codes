#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int f=1;
    int i=1;
    int n;
    int count=0;
    int j=2;
    
    while(c!=4)
    {
    scanf("%d",&c);
          
          switch(c)
          {
              case 1:
              scanf("%d",&n);
                  if(n>=1 && n<=50)
                  {
                      for(i=1;i<=n;i++)
                      {
                          f=f*i;
                      }
                      printf("Factorial value is %d\n",f);
                  }
              else
                  printf("Outside the range");
           break;
              case 2:
              
              scanf("%d",&n);
                    if(n>=1 && n<=50)
                    {
                        for(j=2;j<n;j++)
                        {
                          if(n%j==0)
                          {
                              count++;
                        }
                        }
                        if(count==0)
                            printf("Prime\n");
                        else
                         printf("Not Prime\n");
                    }
                  else
                   printf("Outside the Range\n");
               break;
                      case 3:
              scanf("%d",&n);
                  if(n>=1 && n<=50)
                  {
                     if(n%2==0)
                      printf("Even\n");
              else
                  printf("Odd");
                  }
          else
          {
          printf("Outside the Range");
          }
            break;
    
              case 4:
break;
          }
    }
   return 0;
}