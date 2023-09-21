#include <stdio.h>

static int k = 0;
static int l = 0;
static int o = 0;
void difference(int a2[],int b2[],int *c2); 
void difference(int a2[],int b2[],int *c2)
{
    int i = 0,j = 0;
    while(i < 10 && j<10)
    {
       if(a2[i]==b2[j])
       {
           i++;
           j++;
       }
       else if(a2[i]<b2[j])
       {
           c2[o++] = a2[i++];
       }
       else if(a2[i]>b2[j])
       {
           c2[o++] = b2[j++];
       }
    }
}

void intersection(int a1[],int b1[],int *c1);
void intersection(int a1[],int b1[],int *c1)
{
    int i = 0;
    int j = 0;
    while(i<10 && j<10)
    {
        if(a1[i]<b1[j])
        {
            i++;
        }
        else if(a1[i]>b1[j])
        {
            j++;
        }
        else if(a1[i]==b1[j])
        {
        c1[l++] = a1[i++];
        j++;
    }
}
}
void union1(int a[],int b[],int *c);
void union1(int a[],int b[],int *c)
{
    int i = 0, j = 0;
    while(i < 10 && j<10)
    {
        if(a[i]==b[j])
        {
            c[k++] = a[i++];
            j++;
        }
        else if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        c[k++] = b[j++];
    }

for(;i<10;i++)
{
    c[k++] = a[i];
}
for(;j<10;j++)
{
    c[k++] = b[j];
}

}
int main()
{
    int arr1[10]={2,3,4,5,6,7,8,9,10,11};
    int arr2[10]={2,5,7,8,9,10,11,12,13,14};
int arr3[20];
int arr4[20];
int arr5[20];
printf("Union of the elements are:\n");
union1(arr1,arr2,&arr3);

for(int i = 0;i<k;i++)
{
    printf("%d\n",arr3[i]);

}
printf("Intersection of the elements are:\n");
intersection(arr1,arr2,&arr4);
for(int i = 0;i<=l;i++)
{
    printf("%d\n",arr4[i]);

}
difference(arr1,arr2,&arr5);
printf("Difference of the elements are\n");
for(int i = 0;i<o;i++)
{
    printf("%d\n",arr5[i]);
}

}