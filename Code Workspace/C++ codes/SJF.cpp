#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int bt[n];
    int ct[n];
    int wt[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>bt[i];
    }
    sort(bt,bt+n);
    ct[0] = bt[0];
    for(int i = 1 ; i <n ; i++)
    {
        ct[i] = ct[i-1] + bt[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        wt[i] = ct[i]-bt[i];
    }
    float ctsum = 0;
    float wtsum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        ctsum+=ct[i];
    }
      cout<<"Average Turnaround Time = "<<float(ctsum/n)<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        wtsum+=wt[i];
    }
    cout<<"Average Waiting Time = "<<float(wtsum/n);
}