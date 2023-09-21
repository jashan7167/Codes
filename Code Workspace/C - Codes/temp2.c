#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
static int sum=0;
int convertstrtoint(char str1[])
{
    int n=0;
    for(int i = 0;str1[i]!='\0';i++)
    {
          n = n*10 + str1[i] - '0';    
    }
    return n;
}
int sumdigits(int num);
int sumdigits(int num)
{
    
    
    if(num==0)
    {
return;
    }
    
    return sumdigits(num/10) + sumdigits(num%10);
}

int main() {
char str[10];
gets(str);

  int n = convertstrtoint(str);
    
        int a = sumdigits(n);
        printf("%d",a);
    return 0;
}
