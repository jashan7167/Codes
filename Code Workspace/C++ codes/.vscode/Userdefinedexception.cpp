#include<iostream>
#include<exception>
using namespace std;
class Myexception:public exception
{
    public:
    string what(string s)
    {
        return s;
    }
   
};
class Myexception2:public exception
{
    public:
    string what(string s)
    {
        return s;
    }
   
};
class Person
{
    int age;
    string name;
    public:
    Person(int a,string n)
    {
        try
        {
        if(age<16 || age>60)
        {
          
            throw Myexception();
        }
        else
        {
            age  = a;
        }
        }
        catch(Myexception e)
{
    cout<<e.what("Age is Invalid");
}

        try
        {
        for(int i = 0 ; n[i]!='\0';i++)
        {   
            if(isdigit(n[i]))
            {
                throw Myexception2();
                break;
            }
            }
        } 
                catch(Myexception2 e)
{
    cout<<e.what("Name has numeric characters!!!");
}
  


    }
    void display()
    {
        cout<<age<<endl;
        cout<<name<<endl;
    }
};
int main()
{
Person p(61,"1Jashan23");

}