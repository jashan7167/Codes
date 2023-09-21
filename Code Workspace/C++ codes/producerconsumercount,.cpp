#include <iostream> 
#include<unistd.h> 
using namespace std; 
int buffer[3]; 
int in = 0; 
int out = 0; 
int count = 0;
void producer() 
{ 
int item; 
if(count==3) 
{ 
cout<<"Buffer Overflow!"<<endl; 
return; 
} 
else 
{ 
cin>>item; 
buffer[in]= item; 
in = (in+1)%3; 
count+=1;
} 
} 
void consumer() 
{ 
int consumed;
if(count==0) 
{ 
cout<<"Buffer Empty"<<endl; 
return; 
} 
else 
{ 
consumed = buffer[out]; 
buffer[out] = 0; 
out = (out+1)%3;
count-=1; 
} 
} 
void display() 
{ 
cout<<"Buffer Status!"<<endl; 
for(int i = 0 ;i < 3 ; i++) 
{ 
cout<<buffer[i]<<" "; 
} 
cout<<endl; 
cout<<"in = "<<in<<endl; 
cout<<"out = "<<out<<endl; 
} 
int main() { 
// Write C++ code here 
int flag = 1; 
int choice; 
cout<<"1:Producer\n2:Consumer\n3:Display\n4:Exit"<<endl; while(flag) 
{ 
cout<<"Enter your choice"<<endl; 
cin>>choice; 
switch(choice) 
{ 
case 1:
producer(); 
break; 
case 2: 
consumer(); 
break; 
case 3: 
display(); 
break; 
case 4: 
flag = 0; 
} 
} 
return 0; 
} 
