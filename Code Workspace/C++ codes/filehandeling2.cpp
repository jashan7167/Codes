#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream new_file;
    new_file.open("newfile_write.txt",ios::out);
    if(!new_file)
    {
        cout<<"File Creation Failed";
    }
    else
    {
cout<<"New file created";
// string ch;
// cin>>ch;
char ch[20];
cout<<"Enter what you want to write in the file: "<<endl;
for(int i =0 ; i<20;i++)
{
    cin>>ch[i];
}

new_file<<ch;
new_file.close();
    }
    return 0;
}