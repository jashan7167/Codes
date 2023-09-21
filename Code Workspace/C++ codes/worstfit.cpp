#include<iostream>


using namespace std;


int main()
{
    int no;
    cout<<"Enter the no of processes:"<<endl;
    int bno;
    cin>>no;
    cout<<"Enter the no of blocks:"<<endl;
    cin>>bno;
    int process[no];
    int blocks[bno];
    bool flag[no] = {false};
    int worstidx;

    for(int i = 0 ; i<no;i++)
    {
        cout<<"Enter the size of the process:"<<endl;
        cin>>process[i];
    }
    for(int j = 0 ; j<bno ; j++)
    {
        cout<<"Enter the size of the blocks:"<<endl;
        cin>>blocks[j];
    }
loop:
for(int i  = 0 ; i < no ; i++)
{
    worstidx = -1;
    if(flag[i]==false)
    {
        for(int j = 0 ; j<bno ; j++)
        {
            if(blocks[j]>=process[i])
            {
            if(worstidx==-1)
            {
                worstidx = j;
            }
            else if(blocks[j]>blocks[worstidx])
            {
                worstidx = j;
            }
        }
        }
        if(worstidx!=-1)
        {
            cout<<"P-"<<i<<"allocated in the b-"<<worstidx<<endl;
            blocks[worstidx]-=process[i];
            flag[i] = true;
            goto loop;
        }
    }
}
}