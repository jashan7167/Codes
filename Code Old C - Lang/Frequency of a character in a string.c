#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],ch;
    int count=0;
    printf("Enter the string:\n");
gets(str);
fflush(stdin);
    printf("Enter the character you want to find the frequency of:\n");
   
    scanf("%c",&ch);

    for(int i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
            count++;
        }
    }
    printf("Frequency = %d",count);
}