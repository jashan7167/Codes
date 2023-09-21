#include<stdio.h>


int main()
{
int count,i;
char str[20];
printf("Enter a string: \n");
fgets(str,sizeof(str),stdin);

int length=0;
for(i=0;str[i]!='\0';i++)
{
    length++;
}

for(i=0;str[i]!='\0';i++)
{
    if(str[i]==' ' || str[i+1]=='\0')
    {
        count++;
        continue;
    }
}
printf("No of words = %d",count);
}