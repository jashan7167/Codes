#include<iostream>
#include<exception>
using namespace std;

class Overspeed:public exception
{
int speed;
public:
char * what()
{
    return"Lower Your Speed You Are In The Car Not In Plane";
}
void get_speed()
{
    cout<<"Speed  = "<<speed;
}
void set_speed(int s)
{
    speed = s;
}
};

class Car
{
    int s;
    public:
    Car()
    {
        s = 0;
    }
    Car(int speed)
    {
       s = speed;
    }
    void accelerate()
    {
        s= s+ 10;

        if(s>150)
        {
            Overspeed ob;
            ob.set_speed(s);
            throw ob;
        }
    }
    
};

int main()
{
    try
    {
    Car c(120);
    c.accelerate();
    }
    catch(Overspeed ob)
    {
        cout<<ob.what();
    }
}