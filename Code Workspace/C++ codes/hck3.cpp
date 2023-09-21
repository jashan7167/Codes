#include<iostream>
#include<string>
using namespace std;

class Biginteger
{
    int A[10];
    public:
    Biginteger(string s,int n)
    {
    
       for(int i=0;i<=n;i++)
       {
           A[i] = s[i]-'0';
           
        
       }
    };
    void print(int n)
    {
       for(int i = 0;i<=n;i++)
       {
         cout<<A[i];
       }
    }

};


int main()
{
    string str;
    int len;
    cin>>str;
    len = str.length() -1;
    Biginteger ob(str,len);


    ob.print(len);

 
 return 0;
}