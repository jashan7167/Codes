#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int ID;
class student
{
    public:
    int age;
    string name;

public:
void addstudent()
{
    cout<<"Enter age of student: "<<endl;
    cin>>age;
    cout<<"Enter name of student"<<endl;
    cin>>name;

}
void write()
{
    ofstream write;
    write.open("student",ios::app);
    write<<age<<"\n";
    write<<name<<"\n";
}
void print()
{
    cout<<age<<endl;
    cout<<name<<endl;
}

};
void read(student ob)
{
    
ifstream read;
read.open("student");
char ch;
while(!read.eof())
{
    read>>ob.age;
    read>>ob.name;
}
ob.print();
}

int main()
{
    int n;
    cout<<"How many students you want to add: ";
    cin>>n;
    student ob[n];
    student ob1[n];
    for(int i = 0 ; i<n;i++)
    {
    ob[i].addstudent();
    }
    for(int i = 0;i<n;i++)
    {
    ob[i].write();
    }
    for(int i = 0 ; i<n;i++)
    {
        read(ob1[i]);
    }
}