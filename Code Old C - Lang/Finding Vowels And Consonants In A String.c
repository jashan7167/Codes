#include<stdio.h>

int main()
{
    char str[1000];
    int count1=0,count2=0,i;

    printf("Enter the string:\n");

    gets(str);

 
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a' || str[i]=='A')
        {
            
            count1++;
        }
        else if(str[i]=='e' || str[i]=='E')
        {
       
            count1++;
        }
        else if(str[i]=='i' || str[i]=='I')
        {
            
            count1++;
        }
        else if(str[i]=='o' || str[i]=='O')
        {
            
            count1++;
        }
        else if(str[i]=='u' || str[i]=='U')
        {
            
            count1++;
        }
        else
        count2++;
    }
printf("Vowels = %d and Consonants = %d",count1,count2);

}

