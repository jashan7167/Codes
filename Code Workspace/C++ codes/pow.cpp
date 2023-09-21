#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cin>>n;

    for(int i = 0;i<n;i++)
    {
        for(int j = i ; j>=1;j--)
        {
            cout<<pow(2,j-1)<<" ";
        }
        cout<<endl;
    }
}