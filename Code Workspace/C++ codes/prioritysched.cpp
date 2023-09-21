#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of process:"<<endl;
    cin>>n;
    int process[n];
    int prio[n];
    int wt[n];
    int ct[n];
    int tat[n];

    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the burst time of "<<i<<" process"<<endl;
        cin>>process[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        cout<<"Enter the priority of "<<i<<" process"<<endl;
        cin>>prio[i];
    }

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = i+1; j<n;j++)
        {
            if(prio[j]<prio[i])
            {
              swap(prio[j],prio[i]);
              swap(process[j],process[i]);
            }
        }
    }

ct[0]=process[0];

  for(int i = 1 ; i<n ; i++)
    {
        ct[i]=ct[i-1]+process[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        wt[i]=ct[i]-process[i];
    }
    float tart = 0;
    float twt = 0;

   for(int i = 0 ; i<n ; i++)
    {
        tart = tart + ct[i];
    }

    for(int i = 0 ; i<n ; i++)
    {
        twt = twt + wt[i];
    }

cout<<"Average Turnaround Time: "<<tart/n<<endl;
cout<<"Average Waiting Time: "<<twt/n<<endl;

}
