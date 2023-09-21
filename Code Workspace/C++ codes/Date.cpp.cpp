#include <iostream>
using namespace std;
bool leapyear(int m)
{
   if(m%400==0)
   {
    return true;
   }
   else if(m%100==0)
   {
    return false;
   }
   else if(m%4==0)
   {
    return true;
   }
   else{
    return false;
   }
}
int main() {
    int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d;
    int m;
    int y;
    int choice;
    int b = 1;
    cout<<"Enter the date in format DD/MM/YY"<<endl;
   cin >> d; // read the day
   if ( cin.get() != '/' )
   {
      cout << "expected /\n";
      return 1;
   }
   cin >> m; // read the month
   if (cin.get() != '/' ) // make sure there is a slash between MM and YYYY
   {
      cout << "expected /\n";
      return 1;
   }
   cin >> y; // read the year
   cout << "input date: " << d << "/" << m << "/" << y << "\n";
   cout<<"Date && Time \n 1.Show next date \n 2.Show Previous Date \n 3.Exit"<<endl;
    do
    {
       cout<<"Enter the choice:"<<endl;
       cin>>choice;
       switch(choice)
       {
           case 1:
           {
           if(m<=12 && d<days[m-1]) //next day
           {
               cout<<d+1<<"/"<<m<<"/"<<y<<endl;
           }
           else if(m==12 && d==days[m-1]) //new year
           {
               cout<<"01/01/"<<y+1<<endl;
           }
           else if((m<12 && d==days[m-1]) && (m!=2)) //next month change
           {
               cout<<"01/"<<m+1<<"/"<<y<<endl;
           }
           else if(m==2)
              {
                if(d==days[m-1])
                {
                    if(leapyear(y)==true)
                    {
                        cout<<d+1<<"/"<<m<<"/"<<y<<endl;
                    }
                    else
                    {
                        cout<<"01/"<<m+1<<"/"<<y<<endl;
                    }
                }
                else if(d<days[m-1])
                {
                    cout<<d+1<<"/"<<m<<"/"<<y;
                }
                else if(d==29 && leapyear(y))
                {
                    cout<<"01/"<<m+1<<"/"<<y<<endl;
                }
              }
           break;
           }
           case 2:
           {
           if((d==29 && m==2) && leapyear(y))
           {
               cout<<"28/02/"<<y<<endl;
           }
           else if(d!=1)
           {
               if(m<=12 && d<=days[m-1])
               {
                   cout<<d-1<<"/"<<m<<"/"<<y<<endl;
               }
           }
           else if(m==3 && d==1)
           {
               if(leapyear(y))
               {
                   cout<<"29/02/"<<m<<endl;

               }
               else{
                cout<<"28/02/"<<m<<endl;
               }
           }
           else if(d==1)
           {
              if(m!=1)
              {
                  cout<<days[m-2]<<"/"<<m-1<<"/"<<y<<endl;
              }
              else
              {
                  cout<<"31/12/"<<y-1<<endl;
              }
           }
           break;
           }
        }
    }while(choice!=3);
    return 0;
}
