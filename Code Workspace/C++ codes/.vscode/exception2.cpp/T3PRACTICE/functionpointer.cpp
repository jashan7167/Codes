#include<iostream>

using namespace std;
class cl
{

    public:
    int val;
    cl()
    {
    val= 0;
    }
    cl(int c )
    {
        val= c;
    }
};
int add(int a , int b)
{
    int sum = 0;
    sum = a+b;
    return sum;
}

int main()
{
    int cl::*data;
    data = &cl::val;
cl ob(10);
cl *pt;
pt = &ob;
cout<<pt->*data<<endl; //arrow star
cout<<ob.*data<<"Class Data Member pointerr"<<endl; //dot star
    int (*ptr) (int , int); //function pointer
    ptr = add;
    int sum = ptr(5,5);
    cout<<sum;
}