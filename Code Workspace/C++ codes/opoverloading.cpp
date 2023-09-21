#include<iostream>

using namespace std;

class ov
{
    public:
    int longitude;
    int latitude;
    ov()
    {
        longitude = 0;
        latitude = 0;
    }
    ov(int lat,int lo)
    {
        longitude = lo;
        latitude = lat;
    }
    ov operator+(ov op2)
    {
        ov temp;
        temp.longitude = longitude + op2.longitude;
        temp.latitude = latitude + op2.latitude;
        return temp;
    }
    ov operator-(ov op2)
    {
        ov temp;
        temp.longitude = longitude - op2.longitude;
        temp.latitude = latitude - op2.latitude;
        return temp;
    }
    ov operator++( ) 
    {
        longitude++;
        latitude++;
    }
    ov operator--()
    {
        longitude--;
        latitude--;
    }
    ov operator==(ov op2)
    {
        longitude = op2.longitude;
        latitude = op2.latitude;
    }
    void display()
    {
           cout<<"Latitude = "<<latitude<<endl;
           cout<<"Longitude = "<<longitude<<endl;
    }
};



int main()
{
ov ob1(5,10);
ov ob2(10,20);
ov ob3;
ov ob4;
ov ob5;
ob3 = ob1 + ob2;
ob4 = ob1 - ob2;
++ob1;
++ob2;
ob5 = ob1;
ob1.display();
ob2.display();
ob3.display();
ob4.display();
ob5.display();


}