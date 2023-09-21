#include<iostream>
using namespace std;


class Information
{
    string name;
    int age;
    string address;
public:
friend istream &operator >>(istream &i,Information &a);
friend ostream &operator <<(ostream &o,Information &ob);
};

istream &operator >>(istream &i,Information &a)
{
    cin>>a.name;
    cin>>a.age;
    cin>>a.address;
    return i;
}
ostream &operator <<(ostream &o,Information &ob)
{
    cout<<"Name : "<<ob.name;
    cout<<"Age : "<<ob.age;
    cout<<"Address : "<<ob.address;
    return o;
}
int main()
{
Information o;
cin>>o;
cout<<o;
}