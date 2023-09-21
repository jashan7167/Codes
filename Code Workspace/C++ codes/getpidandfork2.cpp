// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
 cout<<"Hello World"<<endl;
 cout<<"I am parent process with pid "<<getpid()<<endl;
 int x = fork();
 cout<<"Here i am just after forking"<<endl;
 if(x==0)
 {
     cout<<"I am child process with pid "<<getpid()<<endl;
 }
 else if(x!=0)
 {
     cout<<"I am parent process with pid "<<getpid()<<endl;
 }
}
//before forking we printed the pid of parent which comes to be same as after forking