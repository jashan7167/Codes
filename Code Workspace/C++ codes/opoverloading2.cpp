#include <iostream>
using namespace std;
class array
{
    private:
    int arr[5];
    public:
    void input()
    {
        for(int i = 0 ;  i< 5 ; i++)
        {
            cin>>arr[i];
        }
}
   friend  void operator ==(array &ob,array &ob2);
 
};

void operator ==(array &ob,array &ob2)
{
    int count = 0;
         for(int i = 0 ; i <5 ; i++ )
         {
             if(ob.arr[i]==ob2.arr[i])
             {
                 count++;
             }
         }
         if(count == 5)
         {
             cout<<"Both The Arrays Are Equal";
         }
         else
         {
             cout<<"Arrays are not equal";
         }
}

int main() {
    array ob1;
    ob1.input();
    array ob2;
    ob2.input();
    ob1 == ob2;
    return 0;
}