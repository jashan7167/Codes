#include<iostream>

using namespace std;

template<typename x,typename y>x add( x a, y b)
{
    x sum;
    sum = a+b;
    return sum;
}

int main()
{
    int i = 10;
    int sum1;
    float f = 10.3;
    sum1 = add(i,f);
    cout<<sum1;

    float sum;
    sum = add(f,i);
    cout<<sum;
}