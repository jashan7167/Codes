#include<iostream>

using namespace std;

void Xhandler(int test)
{
    try
    {
        if(test)
        {
            throw test;
        }
    }
    catch(int i)
    {
        cout<<"Caught an exception";
    }
}

int main()
{
    cout<<"Start";
    Xhandler(0); //0 will not be executed because it will not be thrown
    Xhandler(1);
    Xhandler(2);
}