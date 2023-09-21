#include<iostream>

using namespace std;

class Mammal
{
    public:
    virtual bool  lay_eggs()
    {
        return false;
    };
};

class Dolphin:public Mammal{
public:

};

class Female:public Mammal{
    public:
    
};

class Cat:public Mammal{
    public:
    
};

Mammal *factory() {
switch(rand() % 3 ) {
case 0: return new Female;
case 1: return new Cat;
case 2: return new Dolphin;
}
return 0;
}

int main()
{
    Mammal *p;
    int d = 0,f = 0,c = 0;
    for(int i = 0 ; i <10 ; i++)
{
    p = factory();
    cout<<"Object = ";
    cout<<typeid(*p).name();
    if(typeid(*p)==typeid(Dolphin)) d++;
    if(typeid(*p)==typeid(Cat)) c++;
    if(typeid(*p)==typeid(Female)) f++;
}
}