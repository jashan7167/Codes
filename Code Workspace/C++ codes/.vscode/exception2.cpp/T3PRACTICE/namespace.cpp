#include<iostream>

using namespace std;

namespace N1
{
    int i;
    namespace N2
    {
        int j;
    }
}

int main()
{
    N1::i = 10;
   N1:: N2::j   = 20;
   //to avoid this we must use using keyword
   using namespace N1;
   using namespace N1::N2;
   cout<<i<<j;

}