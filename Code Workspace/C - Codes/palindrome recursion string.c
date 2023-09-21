#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int palindrome(char str[80],int s,int r);
int palindrome(char str[80],int s,int r)
    {
        if(str[s]!=str[r])
        {
            return 0;
        }
    else
        return 1;
    s++;
    r--;
    palindrome(str,s,r);
    }
int main() {

        int str1[80];
        fgets(str1,sizeof(str1),stdin);
      int e = strlen(str1)-1;
        int a = 0;
        int b = palindrome(str1,a,e);
        printf("%d",b);
          
            
    
    return 0;
}
