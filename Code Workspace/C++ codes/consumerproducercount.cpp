#include<bits/stdc++.h>


using namespace std;
int Buf[5];
int in=0;
int out=0;
int count1 = 0;
void consumer()
{
    cout<<"Consumer initiated"<<endl;
    if(count1!=0 && in!=0)
    {
    Buf[out]=0;
    out = (out+1)%5;
    count1--;
    }
    else
    {
        cout<<"Buffer Underflow"<<endl;
    }

}
void producer()
{
    int val;
    if(count1<5)
    {
        cout<<"Enter the value to be produced:"<<endl;
     cin>>val;
     Buf[in]=val;
     in = (in + 1)%5; 
     count1++;
    }
    else{

        cout<<"Buffer Overflow"<<endl;
    }
    }

void display()
{
for(int i = 0 ; i<5;i++)
{
cout<<Buf[i]<<endl;
}
    
}
     



    int main() {
int flag = 1;
int choice;
cout<<"1:Producer\n2:Consumer\n3:Display\n4:Exit"<<endl;
while(flag)
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
