#include<iostream>

using namespace std;
class vop
{
public:
int data;
public:
friend istream &operator>>(istream &in,vop &op1);
friend ostream &operator<<(ostream &ou,vop &op1);
virtual void display()
{
    cout<<"Data = "<<data;
}

};

istream &operator>>(istream &in,vop &op1)
{
    cout<<"Enter the data: "<<endl;
    cin>>op1.data;
    return in;
}

ostream &operator<<(ostream &ou,vop &op1)
{
    cout<<"Printing: "<<endl;
    cout<<op1.data;
    return ou;
}

class vop2:public vop
{
public:
int data;
void display()
{
    cout<<data;
}
friend istream &operator>>(istream &in,vop &op1);
friend ostream &operator<<(ostream &ou,vop &op1);
};

int main()
{
    vop *ptr;
    vop ob1;
    vop2 ob2;
    cin>>ob1;
    cout<<ob1;
    ptr = &ob1;
    ptr->display();
    cin>>ob2;
    ptr = &ob2;
    ptr->display();
}