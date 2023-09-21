#include<stdio.h>
#include<string.h>

 char str[4][50]={"speed","velocity ","acceleration","relativity","time"};

 char str1[10];
 char str2[10];
 int n;
 int j;
 int i;
int main()
{


 printf("Enter the string you want to check:\n");
 scanf("%s",str1);
int count=0;
for(i=0;i<=4;i++)
{
    int a=strcmp(&str[i][0],str1);
    if(a==0)
    {
         n=i;
        count++;
        break;
        
    }
}
if(count==1)
{
    printf("String Found!\nDo you want to replace this?\n Enter(y/n)");
}
else
printf("Not Found");

 
 char b;
 getch(b);
 if(b=='y')
 {
     printf("Enter the string you want to replace it with");

     scanf("%s",str2);

     for(j=0;str1[j]!='\0';j++);
     {
         str[n][j]=str2[j];
     }
 }
 else
  printf("Exit Program");

  for( i=0;i<=4;i++)
  {
      for( j=0;str[i][j]!='\0';j++)
      {
          printf("%c",&str[i][j]);
      }
  }
}