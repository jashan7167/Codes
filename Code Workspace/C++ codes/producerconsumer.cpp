#include<bits/stdc++.h>
using namespace std;
int in = 0; 
int out = 0;
int buffer[3]={0};
void producer()
{
    if((in+1)%3==out)
    {
      cout<<"Buffer Overflow!"<<endl;
    }
    else
    {
        int item;
        cin>>item;
        buffer[in] = item;
        in = (in+1)%3;
    }
}
void consumer()
{
    if(in==out)
    {
        cout<<"Buffer Underflow"<<endl;
    }
    else
    {
        int consumed = buffer[out];
        buffer[out] = 0;
        out = (out+1)%3;
        
    }
    
}
void display()
{
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<buffer[i]<<endl;
    }
}
int main()
{
    int flag = 1;
     cout<<"1.)Producer \n 2.)Consumer \n 3.) Display \n"<<endl;
     while(flag)
     {
        int choice;
        cin>>choice;
        switch (choice)
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
        default:
        cout<<"Exiting!"<<endl;
        flag = 0;
        break;
        }
        
     }
}