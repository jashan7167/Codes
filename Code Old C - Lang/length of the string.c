#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
     
     printf("Enter the string: \n");
    fgets(s,sizeof(s),stdin);

     int l=0;

     for(int i=0;s[i]!='\0';i++)
     {
         l++;
     }
     printf("Length = %d",l);
}