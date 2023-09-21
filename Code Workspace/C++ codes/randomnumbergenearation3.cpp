#include<bits/stdc++.h>

using namespace std;

int main()
{
    int freq[6]={0};
    for(int i = 0 ; i<20;i++)
    {
       int face = 1 + rand()%6;
       cout<<face<<endl;
        switch(face)
        {
            case 1:
            freq[0]++;
            break;
            case 2:
            freq[1]++;
            break;
            case 3:
            freq[2]++;
            break;
            case 4:
            freq[3]++;
            break;
            case 5:
            freq[4]++;
            break;
            case 6:
            freq[5]++;
            break;
        }
    }
    cout<<"end";
    for(int i = 0 ; i<6;i++)
    {
        cout<<freq[i]<<endl;
    }
}