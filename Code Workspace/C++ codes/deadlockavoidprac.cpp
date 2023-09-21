#include<bits/stdc++.h>


using namespace std;


int main()
{
    int n;
    cout<<"Enter the no of processes:"<<endl;
    cin>>n;
    int max[n];
    int needs[n];
    int alloc[n];
    int avail;
   
cout<<"Enter available resources"<<endl;
cin>>avail;
for(int i = 0 ; i<n;i++)
{
    cout<<"Enter the max value of resources T-"<<i<<"needs"<<endl;
    cin>>max[i];
}

for(int i = 0 ; i<n;i++)
{
    cout<<"Enter the value of allocated resources T-"<<i<<"needs"<<endl;
    cin>>alloc[i];
}
int sumalloc = 0;
for(int i = 0 ; i<n;i++)
{
    sumalloc  = sumalloc + alloc[i];
}

  cout<<"Calculating Needs"<<endl;
for(int i = 0 ; i<n;i++)
{
    needs[i]=max[i]-alloc[i];
}
// for(int i = 0 ; i<n;i++)
// {
//     cout<<"need"<<needs[i]<<endl;
//     cout<<"all"<<alloc[i]<<endl;;
//     cout<<"max"<<max[i]<<endl;
// }
loop:
for(int i = 0 ; i<n ; i++)
{
    if(needs[i]!=0)
    {
    if(needs[i]>avail)
    {
        cout<<"Not sufficient resources"<<endl;
    }
    else
    {
       alloc[i] = alloc[i] + needs[i];
       avail = avail + alloc[i];
       needs[i]=0;
       cout<<"Resources allocated to T-"<<i<<endl;
       goto loop;
    }
}
}
}
