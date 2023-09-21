#include<iostream>

using namespace std;

void Xtest(int test)
{
    cout<<"Inside X test "<<test<<endl;
    if(test)
    {
        throw test;
    }

}
int main()
{
    try
    {
        Xtest(0);
        Xtest(1);
        Xtest(2);//this will not execute as exception is catched in XTEST(1)
        
    }
    catch(int i)
    {
           cout<<"Caught an exception";
    }
}

