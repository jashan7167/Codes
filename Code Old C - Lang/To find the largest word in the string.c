#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *largest_word(char *s); //basically it will take the base address of the string access the string and return a char pointer with the address of the new string

int main()
{
char s[100];
fgets(s,sizeof(s),stdin);
char *word=largest_word(s);
printf("%s",word);
}
char *largest_word(char *s)
{
    int len=strlen(s); //takes the base address of string and calculate the length
    int max=-1;
    int count;
    char temp_buffer[256];
    char max_word[256];
    char nonwords[]=" .,;\n\t";
int i=0;

    while(i<len)     /*first we enter the first loop and then we first inner loop it checks the first words  assign the word into the character array and seperate it out
                      for which we assigned null then it checks if count is greater max then it copies this word into the max word and then the second inner increments the value of it to the next alphabet and the loop repeats */
    {
        count=0;
       while(i<len)
       {
        if(strchr(nonwords,s[i])!=NULL) //strchr will return when doesnot find the nonwords characters in the string.
       { 
           break;
       }
       temp_buffer[count]=s[i];
       i++;
       count++;
       
    }
    temp_buffer[count]='\0';
    if(count>max)
    {
        max=count;
        strcpy(max_word,temp_buffer);
    }
    while(i<len)
    {
        if(strchr(nonwords,s[i])==NULL)
        {
        break;
        }
        i++;
    }
}
char *word = malloc(sizeof(char)* (max+1));
strcpy(word,max_word);
return(word);
}