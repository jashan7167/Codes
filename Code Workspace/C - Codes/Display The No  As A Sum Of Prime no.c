#include<stdio.h>


void showassum(int );
int main()
{
    int num;
    printf("Enter the no you want to check:\n");
    scanf("%d",&num);
showassum(num);

}

showassum(int n)
{
    int number;
    int count=0;
    int i;
    for( i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
   number=i; //stored the i in that number variable
   break; //break the loop when the nearest prime number is found
        }
        count=0;
    }
    int n2=n-i;
    printf("%d = %d + %d",n,n2,i);
}