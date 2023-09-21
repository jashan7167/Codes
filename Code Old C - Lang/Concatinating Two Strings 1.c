#include<stdio.h>

int main()
{
    char str1[50];
    char str2[50];
char str3[100];
    printf("Enter the first string: \n");

    gets(str1);

    printf("Enter the second string: \n");
    gets(str2);
int i;
for(i=0;str1[i]!='\0';i++)
{
    str3[i]=str1[i];
}
int n=i; //now n+1  has the null character

for(int j=0;str2[j]!='\0';j++,n++)
{
    str3[n]=str2[j];
}
str3[n]='\0';
printf("Concatinated String:\n");
for(int k=0;str3[k]!='\0';k++)
{
    printf("%c",str3[k]);
} 
}