#include<iostream>
using namespace std;

struct student
{
      string firstn;
      string lastn;
      int age;
      int standard;

};

int main()
{
     student s;
     

     cin>>s.age;
     cin>>s.firstn;
     cin>>s.lastn;
     cin>>s.standard;


     cout<<s.age<<" "<<s.firstn<<" "<<s.lastn<<" "<<s.standard;
}