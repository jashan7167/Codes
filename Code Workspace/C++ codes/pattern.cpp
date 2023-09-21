#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int a = 1;
    cout<<a;
int res = 1;
string res1;
cout<<"\n";
    for(int  i = 0;i<n-i++)
    {
         res = res*20 + 1;
    for(int j = 0 ; j<=i+1 ; j++)
    {
         res1 = to_string(res);
         cout<<res1[j]<<" ";
    }
    cout<<"\n";
    }
}