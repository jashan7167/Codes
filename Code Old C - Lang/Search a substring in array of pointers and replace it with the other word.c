#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   char *str[]={"I love hargun","I love gaming","I love badminton","I love superheros","i love marvel","I love standup comics one day i wish to be one"};
   char str1[100];
   char str2[100];
   int m,k,i,j,o,p;
   printf("Enter the string you want to search: \n");
   fgets(str1,sizeof(str1),stdin);
   int l=strlen(str1);
  
char temp[100];
   for(i=0;i<6;i++)
   {
      strcpy(temp,str[i]);
      for(j=0;temp[j+l-2]!='\0';j++)
      {
           k=j;    
          for(m=0;m<=l-1;m++)
          {
              if(temp[k]!=str1[m])
              {
                     break;
                   
              }
              k++;
          }
          if(m==l-1)
          {
              printf("String Found\n");
              o=j;
              p=i;
              printf("Enter the string you want to replace this string with: \n");
              fgets(str2,sizeof(str2),stdin);
              break;
          }
      }
   }
         int l2=strlen(str2); 
  char temp2[100];
  strcpy(temp2,str[p]);
  
  for(k=0;k<l2;k++)
  {
    temp2[o]=str2[k];
    o++;
  }
 str[p]=printf("%s",temp2);
  
  printf("%s",str[p]);

}



       

   
      
    

             
   
