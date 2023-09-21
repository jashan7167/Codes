#include<iostream>

using namespace std;

class student
{
protected:
int rollno;
};

class test:virtual public student
{
    protected:
int marks[5];
public:
void input()
{
cout<<"Enter the roll no: ";
cin>>rollno;
for(int i = 0;i<5;i++)
{
cout<<"Enter the marks for "<<i<< " subject: ";
cin>>marks[i];
}
}
};

class result:public test
{
public:
void display()
{
    int sum = 0;
    int average;
    cout<<"Roll number  = "<<student::rollno<<endl;
    for(int i = 0;i<5;i++)
{
sum +=marks[i];
}
average = sum/5;
cout<<"Average = "<<average<<endl;
cout<<"Total= "<<sum<<endl;

}
};

int main()
{
    result ob;
    ob.input();
    ob.display();
}