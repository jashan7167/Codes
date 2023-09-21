#include<iostream>
using namespace std;

class constr
{
    private:
    int a;
    int b;
    public:
    constr() //default constructor
    {
        a = 0;
        b = 0;
    }
    constr(int x,int y)  //parameterised constructors
    {
        a = x;
        b = y;
    }
    constr(constr const &ob)  //copy constructor
    {                          
        a = ob.a;
        b = ob.b;
    }
    void display()
    {
    cout<<a<<endl;
    cout<<b<<endl;
    }
};


int main()
{
    constr ob; //default constructor is called here
    constr ob2(1,2); //parameterised constructor is called here
    constr ob3 = ob2;
    ob.display();
    ob2.display();
    ob3.display();

}