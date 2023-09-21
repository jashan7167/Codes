#include<iostream>

using namespace std;


class student
{
    string name;
    string rollno;
    int age;
    string address;
    public:
    void input()
    {
        cout<<"Enter the name of the student"<<endl;
        cin>>name;
        cout<<"Enter the rollno:"<<endl;
        cin>>rollno;
        cout<<"Enter the age of student: "<<endl;
        cin>>age;
        cout<<"Enter the address";
        cin>>address;
    }
};

int main()
{
    student ob;
    ob.input();
}