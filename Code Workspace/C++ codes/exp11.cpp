#include<iostream>
#include<fstream>

using namespace std;

class Directory
{
    string name;
    int phoneno;
    public:
friend ostream &operator <<(ostream &ob,Directory &d);
friend istream &operator >>(istream &ob1,Directory &d1);
};
ostream &operator <<(ostream &ob,Directory &d)
{
    fstream new_file;
    new_file.open("phone.txt",ios::in);
    if(!new_file)
    {
        cout<<"File Not Found";
    }
    else
    {
        char ch;
        while(!new_file.eof())
        {
            new_file>>ch;
            cout<<ch;
        }
    }
    new_file.close();
}
istream &operator >>(istream &ob,Directory &d)
{
    fstream new_file;
    new_file.open("phone.txt",ios::out);
    if(!new_file)
    {
        cout<<"File Not Created";
    }
    else
    {
     cout<<"File Created"; 
     
int n;
     cout<<"Enter the no of people you want to store the data of: ";
     cin>>n;
     for(int i = 0 ; i<n;i++)
     {
        cout<<"Enter the name: ";
        cin>>d.name;
        cout<<"\n Enter the phone no: ";
     cin>>d.phoneno;
     d.name = d.name + "   ";
     new_file<<d.name;
     new_file<<d.phoneno;
     new_file<<"\n";
     }
    }
    new_file.close();
    
}
int main()
{
Directory d1;
cin>>d1;
cout<<d1;
}