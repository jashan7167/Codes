#include<stdio.h>
#include<string.h>


int main()
{
    char *str[]={"I love hargun","I love gaming","I love badminton","I love superheros","i love marvel","I love standup comics one day i wish to be one"};

   for(int i=0;*str[i]!='\0';i++)
   {
     printf("%s\n",str[i]); //so dont use asterik in the printf statement it automatically access the string at that address
   }
}
