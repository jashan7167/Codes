#include <iostream>
using namespace std; 
int main() { 
int n; 
cout<<"Enter the no of processes:"<<endl; cin>>n; 
int bno; 
cout<<"Enter the no of blocks:"<<endl; cin>>bno; 
int proc[n]; 
int block[bno]; 
for(int i = 0 ; i<n ; i++) 
{ 
cout<<"Enter the size of the P-"<<i<<endl; cin>>proc[i]; 
} 
for(int i = 0 ; i<bno ; i++) 
{ 
cout<<"Enter the size of the B-"<<i<<endl; cin>>block[i]; 
} 
int t=bno; 
int j = 0; 
int index = bno;
int flag[n] = {false};
int flag2[bno]={false};
for(int i = 0 ; i<n;i++)
{
   while(j<bno)
    {
       if(flag[j]==false)
       {
        if(proc[i]<=block[j])
        {
             block[j]=block[j]-proc[i];
             index = (j-1)%bno;
             cout<<"P-"<<i<<"allocated in the B-"<<j<<endl;
             flag[i] = true;
             flag[j]=true;
             break;
        }
        if(index==j)
        {
            index = (j-1)%bno;
            break;
        }
       }
    
      j = (j+1)%bno;
    }
}
for(int i = 0 ; i<bno;i++)
{
if(flag[i]==false)
{
    cout<<"P- "<<i<<"not allocated"<<endl;
}
}
}

