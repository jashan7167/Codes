#include<iostream>

using namespace std;

class objects
{
    static int count;
    public:
    objects()
    {
        // cout<<"Creating Object";
      count++;
    }
    static void countob()
    {
        cout<<count;
    }
};

int objects::count = 0;
int main()
{
int n;
cout<<"Enter the no of objects you want to make: ";
cin>>n;
objects *ob = new objects[n];  //so as to dynamically create an object array we need to use a pointer
objects::countob();
}