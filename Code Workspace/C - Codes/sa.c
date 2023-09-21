#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
static int i = 0;
  static char temp;
int palindrome(char s2[80],char s1[80],int l);
int palindrome(char s2[80],char s1[80],int l)
{
    if(strcmp(s1,s2)==0)
    {
        return 1;
    }
    else
        return 0;
      
    
    temp = s2[i];
    s2[i]=s2[l-i];
    s2[l-i]=temp;
    i++;
   return palindrome(s2[80],s1[80],l);
   s2[l]='\0';

}
int main() 
{
 char str1[80];
    char str2[80];
    fgets(str1,sizeof(str1),stdin);
    strcpy(str2,str1);
int le = strlen(str1) - 1;
    int a = palindrome(str2,str1,le);
    printf("%d",a);
    
}
