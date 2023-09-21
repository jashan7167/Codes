#include<iostream>
using namespace std;


class Base {
    public:
    int x;
    Base(int in)
    {
        x = in;
    }
  virtual void disp_b()
    {
        cout<<"This is base class with value :  "<<x;
    }
};
 
class Derived : public Base {
    public:
    int z;
    Derived(int in,int on):Base(on)
    {
        z = in;
    }
    void disp_b()
    {
        cout<<"This is derived class with value i and j  "<<x<<z;
    }
    
};
 
int main()
{
    Base b(10);
    b.disp_b();
    Derived d(10,20);
    b = d;
    b.display();
 
    // Object Slicing,
    // z and w of d are sliced off
}
