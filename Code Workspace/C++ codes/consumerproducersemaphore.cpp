#include<bits/stdc++.h>

using namespace std;

int Buf[5];
int mutex1  = 1;
int sem = 5;
int sful  = 0;
int a = 0;
int b = 0;
void wait(int *s1)
{
    while(*s1<=0);
    *s1 = *s1 - 1;
}
void signal(int *s2)
{
    *s2 = *s2 + 1;
}
void consumer()
{
    wait(&mutex1);
    if(sem==5)
    {
        cout<<"Buffer Empty"<<endl;
        signal(&mutex1);
    }
    else
    {
    wait(&sful);
    cout<<"Consumer initiated"<<endl;
    Buf[a] = 0;
    a = (a+1)%5;
    signal(&sem);
    signal(&mutex1);
}
}
void producer()
{
    wait(&mutex1);
    if(sful==5)
    {
   cout<<"Buffer Overflow"<<endl;
   signal(&mutex1);
    }
    else
    {
     wait(&sem);
     cout<<"Enter the value you want to enter";
     int val;
     cin>>val;
     Buf[b]=val;
     b = (b+1)%5;
     signal(&sful);
     signal(&mutex1);
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