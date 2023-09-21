#include<iostream>
using namespace std;

int main(void)
{
    string a;
    string b;
    string c;
    cin>>a;
    cin>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    c = a + b;
    cout<<c;
    char temp;
    cout<<"\n";
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout<<a<<" "<<b;
}