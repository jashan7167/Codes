#include<iostream>

using namespace std;

class Distance
{
    private:
    int feet;
    int inches;
    public:
    class InchesEx
        {
            public:
            string origin;
            int ivalue;
            InchesEx(string ori,int i)
            {
                origin = ori;
                ivalue = i;
            }
        };
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int in,int fe)
    {
         if(in<12)
         {
            throw InchesEx("LESS THAN 12",in );
         }
         else{
            feet = fe;
            inches = in;
         }
    }
};

int main()
{

    try
    {
        Distance d1(11,3.5);
    }
    catch(Distance::InchesEx ix)
    {
     cout<<"Initialization Error "<<ix.origin<<" "<<ix.ivalue;
    }
}