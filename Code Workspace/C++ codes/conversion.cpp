#include<iostream>

using namespace std;


class Cstock1
{
    public:
    string productcode;
    int items;
    float cost;
    Cstock1(string pc,float c,int it)
    {
        productcode = pc;
        items = c;
        cost = it;
    }
    string getpc()
    {
return productcode;
    }
    float getc()
    {
        return cost;
    }
};

class Cstock2
{
    public:
 string p_c;
 float cost;
 Cstock2()
 {

 }   
 Cstock2(Cstock1 ob)
 {
      p_c =ob.getpc();
      cost = ob.getc();  
 }
};

int main()
{
    Cstock1 ob("abc",5000,200);
    Cstock2 ob1;
    ob1 = ob;
    cout<<ob1.p_c;
    cout<<ob1.cost;
}