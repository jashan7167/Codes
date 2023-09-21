#include <stdio.h>
int binarysearch(int arr[],int l,int h,int mid,int key);
int binarysearch(int arr[],int l,int h,int mid,int key)
{
   while(l<h)
    {
        if(key==arr[mid])
        {
            return mid;
            break;
        }
        else if(key>arr[mid])
        {
            l = mid + 1;
        }
        else if(key<arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            return -1;
        }
    
  
        mid = (l + h)/2;
    }

}
int main()
{
    int arr[10];
    int l=0;
    int h=9;
    int mid = (l + h)/2;
    int key;
    

    for(int i = 0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    int d = binarysearch(arr,l,h,mid,key);
    printf("%d",d);
   
    
return 0;
}