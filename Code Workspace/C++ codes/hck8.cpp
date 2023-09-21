#include<iostream>

using namespace std;

class Student
{
    private:
    int scores[5];
    int sum = 0;
    public:
    int calculateTotalScore()
    {
        for(int i = 0;i<5;i++)
        {
            sum+=scores[i];
        }
        return sum;
    }
    void input()
    {
        int s;
        for(int i=0;i<5;i++)
        {
            cin>>s;
            if(s>=0 && s<=50)
            {
            scores[i]= s;
            }
        }
    }

};


int main()
{
    int n;
   int kristen;
   int count = 0;
    cin>>n;
    if(n>1 && n<100)
    {
      Student ob[n];
    for(int i = 0;i<n;i++)
    {
        ob[i].input();     
    }
    kristen = ob[0].calculateTotalScore();
    for(int i =1;i<n;i++)
    {
        if(ob[i].calculateTotalScore()>kristen)
        {
            count++;
        }
    }
    }
    cout<<count;

}