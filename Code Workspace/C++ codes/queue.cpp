#include<iostream>
using namespace std;


template<typename T>class queue
{
private:
T q[10];
int front = -1;
int rear = -1;
public:
void enque(T item)
{
    if(rear== 9)
    {
        cout<<"Queue is Full";
        return;
    }
    else if(front == -1 && rear == -1)
    {
        cout<<"Adding First Item"<<endl;
        front = front+1;
        rear = rear+1;
        q[rear]=item;
    }
    else{
        cout<<"Adding Normally"<<endl;
        rear++;
        q[rear] = item;
    }
}
T deque()
{
    T temp;
    temp = q[front];
    front++;
    return temp;
}
void display()
{
    cout<<"Printing Queue Front To Rear"<<endl;
    for(int i = front;i<=rear;i++)
    {
         cout<<q[i]<<endl;
    }
}
};

int main()
{
    queue<int> ob;
    ob.enque(1);
    ob.enque(2);
    ob.enque(3);
    ob.enque(4);
    ob.enque(5);
    ob.enque(6);
    ob.enque(7);
    ob.enque(8);
    ob.deque();
    ob.display();

    queue<float> ob1;
    ob1.enque(1.5);
    ob1.enque(2.7);
    ob1.enque(3.8);
    ob1.enque(4.9);
    ob1.enque(5.10);
    ob1.enque(6.12);
    ob1.enque(7.12);
    ob1.enque(8.9);
    ob1.deque();
    ob1.display();

}