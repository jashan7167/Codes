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
    friend ov operator+(ov op1 ,ov op2);

    friend ov operator-(ov op1,ov op2);
 
    friend ov operator++(ov &op1 );
   
    friend ov operator--(ov &op1);

   friend  ov operator==(ov op1 ,ov op2);

    void display()
    {
           cout<<"Latitude = "<<latitude<<endl;
           cout<<"Longitude = "<<longitude<<endl;
    }
};

    ov operator+(ov op1,ov op2)
    {
        ov temp;
        temp.longitude = op1.longitude + op2.longitude;
        temp.latitude = op1.latitude + op2.latitude;
        return temp;
    }
    ov operator-(ov op1,ov op2)
    {
        ov temp;
        temp.longitude = op1.longitude - op2.longitude;
        temp.latitude = op1.latitude - op2.latitude;
        return temp;
    }
    ov operator++( ov &op1) 
    {
        op1.longitude++;
       op1. latitude++;
    }
    ov operator--(ov &op1)
    {
        op1.longitude--;
       op1. latitude--;
    }
    ov operator==(ov op1,ov op2)
    {
        op1.longitude = op2.longitude;
        op1.latitude = op2.latitude;
    }


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