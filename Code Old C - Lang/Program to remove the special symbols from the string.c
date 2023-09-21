#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: \n");

    gets(str);

    int i,j,flag=0;

    for(i=0;str[i]!='\0';i++)
    {
      
      
        if(!(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z' || str[i]=='\0')) //basically it checks if the character is between small a and z subsequently between A and Z and also it is not a null character
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1]; //shifts the string to the left side
            }
            str[j]='\0'; //basically when the inner loop reaches the null value then the null character not basically getting copied so the compiler doesnot know that where the string finishes and it starts printing the garabge value so we dont get any output
         flag=1;
        }
        if(flag==1)
        {
            i--;
        }
        flag=0;
    }
printf("Corrected String = %s",str);

    }