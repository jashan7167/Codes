#include<iostream>

using namespace std;
int mutex = 1;
int sem = 5;
int sful = 0;
int buffer[5]={0};

void wait(int *s1)
{
    while(*s1<=0);

    *s1-=1;
}

void signal(int *s2)
{ 
        *s2+=1;
}

void producer()
{
  int item;
  wait(&mutex);
  if(sful==5)
  {
    cout<<"Buffer Overflow!"<<endl;
    signal(&mutex);
    return;
  }
  else
  {
  wait(&sem);
  cout<<"Produce Item:"<<endl;
  cin>>item;
  buffer[sful]=item;
  signal(&sful);
  signal(&mutex);
  }
}

void consumer()
{
    wait(&mutex);
    if(sem==5)
    {
        cout<<"Buffer Empty!"<<endl;
        signal(&mutex);
        return;
    }
    else
    {
    wait(&sful);
    int a = 4 -(sem);
    buffer[a]=0;
    signal(&sem);
    signal(&mutex);
    }
}

void display()
{
    for(int i = 0 ; i<5;i++){
        cout<<buffer[i]<<endl;
    }
    cout<<"Semaphore Empty:"<<sem<<endl;
    cout<<"Semaphore Full:"<<sful<<endl;
}

int main()
{
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
