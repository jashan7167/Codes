#include <iostream>
using namespace std;
class array
{
    private:
    int size1 = 0;
    int size2= 0;
    int *arr;
    public:
    array()
    {
        int choice;
        cout<<"Press 1 For One Dimensional Array And Press 2 For Two Dimensional Array: ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            cin>>size1;
            arr = new int[size1];
            break;
            case 2:
            cin>>size1;
            cin>>size2;
            arr = new int[size1*size2];
            break;
        }
    }
    void input()
    {
        int a;
        if(size1!=0 &&  size2==0)
        {
             for(int i = 0; i<size1;i++)
             {
                       cin>>arr[i];
             }
        }
        else if(size1!=0 && size2!=0)
        {
            for(int i = 0; i<size1;i++)
            {
                for(int j = 0;j<size2;j++)
                {
                    cin>>a;
                    *(arr + i*size2 + j) = a;
                }
            }
        }

    
}
    void operator ==(array &ob)
     {
        int count = 0;
        if(ob.size2 == 0 && size2== 0)
        {
         if(ob.size1 == size1)
         {
            for(int i = 0 ; i < size1; i++)
            {
                if(ob.arr[i] == arr[i])
                {
                    count++;
                }
            }
            if(count == size1 || count == size2)
            {
                cout<<"Arrays are equal";
            }
            else 
            {
                
                cout<<"Arrays are not equal";
            }
         }
         else
         {
            cout<<"Arrays cannot be compared";
         }
        }
     }
         
         

};

int main() {
    array ob1;
    ob1.input();
    array ob2;
    ob2.input();
    ob1 == ob2;
    return 0;
}