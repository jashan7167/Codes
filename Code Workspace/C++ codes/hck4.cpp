#include<iostream>
using namespace std;

class c2;
class c1
{
   public: 
    int a;
    int b;
   public:
   void input()
   {
     cin>>a;
     cin>>b;
   }
   friend void maximum(c1 x,c2 y);
   };

class c2
{
    public:
    int c;
    int d;
    public:
    void input()
    {
        cin>>c;
        cin>>d;
    }
    friend void maximum(c1 x , c1 y);
};

void maximum(c1 x , c2 y)
{
    if(x.a>x.b)
    {
        if(x.a>y.c && x.a>y.d)
        {
            cout<<"a is maximum";
        }
    }
    else if(x.b > y.c && x.b>y.d)
    {
        cout<<"b is maximum";
    }
    else if(y.c>y.d)
    {
        cout<<"c is maxiumum";
    }
    else{
      cout<<"d is maximum";
    }
}

int main()
{
    c1 x;
    c2 y;
    x.input();
    y.input();
    maximum(x,y);
}
