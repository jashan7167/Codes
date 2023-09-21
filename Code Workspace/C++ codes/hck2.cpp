#include<iostream>
#include<sstream>
#include<vector>

using namespace std;



int main()
{
    string str;
    cin>>str;

    vector<string> result;

    stringstream st(str);

    while(st.good())
    {
        string substr;
        getline(st,substr,',');
        result.push_back(substr);
    }
   for(int j=0;j<result.size();j++)
   {
    cout<<result.at(j)<<endl;
   }
   
}