// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
#include<sys/wait.h>
using namespace std;
int main() {
    // Write C++ code here
    int x = fork();
    if(x==0)
    {
        cout<<"Hey i am child process"<<endl;
        cout<<"My parent is in sleep"<<endl;
        cout<<"I am a zombie process now"<<endl;
        cout<<"My parent process id is "<<getppid();
    }
    else if(x!=0)
    {
        sleep(10);
        cout<<"Hey i am parent process"<<endl;
    }
    return 0;
//what we learn from here is parent process always run first
}