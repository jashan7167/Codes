// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<sys/wait.h>
using namespace std;
int main() {
    // Write C++ code here
    int x = fork();
    if(x==0)
    {
        cout<<"We are using wait() system call"<<endl;
        cout<<"Hey i am child process"<<endl;
    }
    else if(x!=0)
    {
        cout<<"We are using wait() sustem call"<<endl;
        wait(NULL);
        cout<<"Hey i am parent process"<<endl;
    }
    return 0;
//what we learn from here is parent process always run first
}