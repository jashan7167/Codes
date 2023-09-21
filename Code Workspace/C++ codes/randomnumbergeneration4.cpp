#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned seed;
    cin>>seed;
    srand(seed);
    for(int i = 0 ; i<10;i++)
    {
        cout<<1+rand()%6<<endl;
    }
}