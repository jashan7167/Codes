#include<bits/stdc++.h>

using namespace std;


int main()
{
int n,m;
cout<<"Enter the no of packets: "<<endl;
cin>>n;
cout<<"Enter the no of students: "<<endl;
cin>>m;
int packets[n];
for(int i = 0 ; i<n; i++)
{
    cout<<"val "<<i<<endl;
    cin>>packets[i];
}
sort(packets,packets+n);
int min = packets[0];
for(int i = 0 ; i+m-1<n;i++)
{
 int temp = packets[i+m-1]-packets[i];
 if(temp<min)
 {
    min = temp;
 }
}
cout<<min;
}