#include <iostream>

using namespace std;

int main()
{
int n;
int m;
cout<<"Enter the no of processes:"<<endl;
cin>>n;
cout<<"Enter the no of resources: "<<endl;
cin>>m;
int max1[n][m];
int alloc[n][m];
int avl[m];
int need[n][m];
cout<<"Enter the available instances for the resource:"<<endl;
for(int i = 0 ; i<m;i++)
{
    cin>>avl[i];
}
for(int i = 0 ; i < n ; i++)
{
    for(int j = 0;j<m;j++)
    {
        cout<<"Enter the max value for "<<i<<" thread for "<<j<<" instance: ";
        cin>>max1[i][j];
    }
}
for(int i = 0 ; i < n ; i++)
{
    for(int j = 0;j<m;j++)
    {
        cout<<"Enter the allocated value for "<<i<<" thread for "<<j<<" instance: ";
        cin>>alloc[i][j];
    }
}
cout<<"Computing Need"<<endl;

for(int i = 0 ; i < n ; i++)
{
    for(int j = 0;j<m;j++)
    {
        need[i][j]=max1[i][j]-alloc[i][j];
    }
}
int countc = 0;
int counts = 0;
int flag1[5]={0};
loop:
for(int i = 0 ; i < n ; i++)
{
    if(flag1[i]==0)
    {
    for(int j = 0;j<m;j++)
    {
        if(need[i][j]<=avl[j])
        {
            counts = counts+1;
        }
    }
    if(counts==3)
    {
        for(int k = 0 ; k<m;k++)
        {
            avl[k]=avl[k]-need[i][k];
            alloc[i][k]=alloc[i][k]+need[i][k];
        }

        for(int k = 0 ; k<m;k++)
        {
           avl[k]=avl[k]+alloc[i][k];
        }
        for(int k = 0 ; k<m;k++)
        {
            need[i][k]=0;
        }
        cout<<"P-"<<i<<" completed"<<endl;
        flag1[i]=1;
        countc= countc + 1;
    }
    else{
        cout<<"Cant allocate P-"<<i<<endl;
    }
    counts=0;
}
else
{
    continue;
}
}
if(countc!=5)
{
    goto loop;
}
}



