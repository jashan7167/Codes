#include<iostream>

using namespace std;

class B
{

};
class D:public B
{

};

int main()
{
    D dervied;
    try
    {
        throw dervied;           //this derived can be caught by base class too to handle it by derived just change the order of catch blocks
    }
    catch(B b)
    {
        cout<<"Caught base class exception";
    }
    catch(D d)
    {
        cout<<"Caught derived class exception";
    }
}