#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    fstream new_file;
    new_file.open("new_file",ios::out);
    if(!new_file)
    {
      cout<<"File Creation Failed";
    }
    else
    {
        cout<<"New file created!";
        new_file.close(); 
    }
    return 0;
}


