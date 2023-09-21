#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char s1[50];
char s2[50];
char s3[100];
    
    gets(s1);
    gets(s2);
    int i;
    for(i=0;s1[i]!='\0';i++)
    {
  s3[i]=s1[i];
    }
    int n=i;
       for(int j=0;s2[j]!='\0';j++,n++)
    {
        s3[n]=s2[j];
    }
    
    for(int k=0;s3[k]!='\0';k++)
    {
        printf("%c",s3[k]);
    }
    
    
    return 0;
}
