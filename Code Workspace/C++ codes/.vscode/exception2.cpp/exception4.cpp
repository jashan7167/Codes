#include<iostream>
#include<string.h>
using namespace std;

class Myexception
{
    public:
    char s[50];
    int what;
    public:
    Myexception()
    {
        *s= 0;
        what = 0;
    }
    Myexception(char *sr,int i )
    {
          strcpy(s,sr);
          what = i;
    }
};
int main()
{
    int i;
    try
    {
      cout<<"Enter the number: ";
    cin>>i;
    if(i<0)
    {
        throw Myexception("Negative Number",1);
    }
    }
    catch(Myexception e)
    {
        cout<<e.s;
        cout<<e.what;
    }
    
    
}