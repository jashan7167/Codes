#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int indexofSubstring(char str[],char s[]);
    
int main() {
    
    
    int str[20];
    int search[20];
    int ind;
    printf("Enter the String:\n");
    
    gets(str);
    
    printf("Enter the string you want to search:\n");

    gets(search);
    
    ind=indexofSubstring(&str[0],&search[0]);
    if(ind==-1)
        printf("Substring Not Found");
    else
        printf("Substring Found At %d",ind);
    return 0;
}
int indexofSubstring(char str[],char s[])
{
    int i,j,k,l;
    l=strlen(s);
    for(i=0;str[i+l-1];i++)
    {
        k=i;
        for(j=0;j<=l-1;j++)
        {
            if(str[k]!=s[j])
            {
                break;
            k++;
            }
        }
        if(j==1)
            return(i);
    }
    return(-1);
}
