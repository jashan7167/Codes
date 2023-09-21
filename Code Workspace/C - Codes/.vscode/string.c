#include <stdio.h>

int main()
{
    char str[100];

    fgets(str,sizeof(str),stdin);
    int count=0;

for(int i=0;str[i]!='\0';i++)
{
    if(str[i]==' ' || str[i+1]=='\0')
    {
        count++;
    }


}
printf("No of words are %d\n",count);    
}