#include<iostream>
using namespace std;


template<typename T>class stack
{
private:
T a[10];
int top=-1;
public:
void push(T item)
{
    if(top==10)
    {
        cout<<"Stack Full";
        return;
    }
    else
    {
top++;
a[top] = item;
    }
}
T pop()
{
    T temp;
    temp = a[top];
    top--;
    return top;
}
void display()
{
    cout<<"Printing Stack Top To Bottom"<<endl;
    for(int i = top;i>=0;i--)
    {
         cout<<a[i]<<endl;
    }
}
};

int main()
{
    stack<int> ob;
    ob.push(1);
    ob.push(2);
    ob.push(3);
    ob.push(4);
    ob.push(5);
    ob.push(6);
    ob.push(7);
    ob.push(8);
    ob.pop();
    ob.display();

    stack<float> ob1;
    ob1.push(1.5);
    ob1.push(2.7);
    ob1.push(3.8);
    ob1.push(4.9);
    ob1.push(5.10);
    ob1.push(6.12);
    ob1.push(7.12);
    ob1.push(8.9);
    ob1.pop();
    ob1.display();

}