#include<iostream>

using namespace std;


class check
{
    static int count;
    int a;
    public:
    void input()
    {
        cin>>a;
    }
    void display() const
    {
        cout<<"Object Variable= "<<a<<endl;
        cout<<"Static Variable= "<<count<<endl;
    }
    void increment()
    {
        count++;
        a++;
    }
};
int check::count = 0;

int main()
{
    // we come to a conclusion that static member variable is shared and common to all the objects
   check ob;
   check ob2;
   check ob3;
   ob.input();
   ob.increment();
   ob.display();
   ob2.input();
   ob2.display();
   ob2.increment();
   ob2.display();
   
}