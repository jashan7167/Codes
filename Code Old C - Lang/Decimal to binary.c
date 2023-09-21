#include<stdio.h>

 void convertdecimaltobinary (int n);

int
main () 
{
  
int num;
  
printf ("Enter the no which you want to convert:\n");
  
scanf ("%d", &num);
  
 
convertdecimaltobinary (num);

} 
 
void

convertdecimaltobinary (int n) 
{
  
int r, binary = 0, i = 1;
  
 
while (n != 0)
    
    {
      
r = n % 2;
      
n = n / 2;
      
binary = binary + r * i;
      
i = i * 10;
    
 
}
  
printf ("%d", binary);

}
