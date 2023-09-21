#include <stdio.h>

int main()
{
    char str[100];

   fgets(str,sizeof(str),stdin);

int l=0;
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("Length of the string is %d ",l);
}