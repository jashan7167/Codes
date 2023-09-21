#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char str1[20];
    int length=0,i;
    printf("Enter a string: ");

    fgets(str,sizeof(str),stdin);
strcpy(str1,str);
    for(int i=0;str[i]!='\0';i++)
    {
     length++;
    }
char temp;
   for(i=0;str[i]!='\0';i++)
   {
if((length-1-i)==i )
{
    break;
}
else
       temp=str[i];
      str[i] = str[(length-1)-i];
        str[(length-1)-i]=temp;
   }
        for(i=0;str[i]!='\0';i++)
        {
            printf("%c",str[i]);
        }
int a=strcmp(str1,str);

if(a==0)
{
    printf("Palindrome\n");
}
else
printf("Not Palindrome\n");
        
}