#include <stdio.h>
int binarysearch(int arr[],int mid,int lw,int up,int k);
int binarysearch(int arr[],int mid,int lw,int up,int k)
{
    mid = (lw + up)/2;
    if(arr[mid]==k)
    {
        return mid;
    }
    else if(k>arr[mid])
    {
        return binarysearch(arr,mid,mid+1,up,k);
    }
    else if(k<arr[mid])
    {
        return binarysearch(arr,mid,lw,mid-1,k);
    }
    else
    return -1;

}
int main()
    {

int arr[10];
for(int i = 0;i< 10;i++)
{
   scanf("%d",&arr[i]);
}
int l=0;
int u = 9;
int mid = (l + u)/2;

int key;
scanf("%d",&key);
int a = binarysearch(arr,mid,l,u,key);
printf("%d",a);
    }