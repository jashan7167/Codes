#include <stdio.h>


int main()
{
    int arr1[10]={2,4,5,3,8,1,6,7,10,11};
    int arr2[10]={12,15,13,19,14,17,18,22,21,20};
int arr3[20];
int j=0,k=0,i=0;
while(i < 10 && j < 10)
{
if(arr1[i]<arr2[j])
{
    arr3[k++]=arr1[i++];
}
else
arr3[k++]=arr2[j++];
}


for(;i<10;i++)
{
    arr3[k++]=arr1[i];
}
for( ;j<10;j++)
{
    arr3[k++]=arr2[j];
}
int temp;
int a = 0 ;
while(a<20)
{
    if(arr3[a]>arr3[a+1])
    {
      temp = arr3[a];
     arr3[a] = arr3[a+1];
arr3[a+1] = temp;
    
    }
    else if(arr3[a-1]>arr3[a] && a!=0)
    { 
       a--;
    }
     else
     a++;
}

for(int f = 0;f< 20 ;f++)
{
    printf("%d  ",arr3[f]);
}

}

