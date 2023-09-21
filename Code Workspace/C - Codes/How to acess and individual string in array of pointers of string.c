#include<string.h>
#include<stdio.h>
int main()
{
   char *str[]={"I love hargun","I love gaming","I love badminton","I love superheros","i love marvel","I love standup comics one day i wish to be one"};
   char str1[100];
   char str2[100];
   printf("Enter the string you want to search");
   fgets(str1,sizeof(str1),stdin);
   int l=strlen(str1);
char temp[100];
   for(int i=0;i<6;i++)
   {
       strcpy(temp,str[0]);
      for(int j=0;temp[j]!='\0';j++)
      {
          printf("%c",temp[j]);
          
      }
      break;
   }
}