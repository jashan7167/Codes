#include<iostream>

using namespace std;

class A
{
    public:
        A(){
            callA = 0;
        }
    private:
        int callA;
        void inc(){
            callA++;
        }

    protected:
        void func(int & a)
        {
            a = a * 2;
            inc();
        }
    public:
        int getA(){
            return callA;
        }
};

class B
{
    public:
        B(){
            callB = 0;
        }
    private:
        int callB;
        void inc(){
            callB++;
        }
    protected:
        void func(int & a)
        {
            a = a * 3;
            inc();
        }
    public:
        int getB(){
            return callB;
        }
};

class C
{
    public:
        C(){
            callC = 0;
        }
    private:
        int callC;
        void inc(){
            callC++;
        }
    protected:
        void func(int & a)
        {
            a = a * 5;
            inc();
        }
    public:
        int getC(){
            return callC;
        }
};

class D:public A,public B,public C
{

	int val;
	public:
		//Initially val is 1
		 D()
		 {
		 	val = 1;
		 }


		 //Implement this function
		 void update_val(int new_val)
		 {
            int acount=0;
            int bcount=0;
            int ccount=0;
            int check=0;
            while(1)
            {
                check = new_val%2;
                if(check==0)
                {
                acount++;
                new_val = new_val/2;
                }
                else
                break;
            }
        while(1)
            {
                check = new_val%3;
                if(check==0)
                {
                bcount++;
                new_val = new_val/3;
                }
                else
                break;
            }
           
          while(1)
            {
                check = new_val%5;
                if(check==0)
                {
                ccount++;
                new_val = new_val/5;
                }
                else
                break;
            }
            for(int i = 0;i<acount;i++)
            {
            A::func(val);
            A::getA();
            }
            for(int j = 0;j<bcount;j++)
            {
            B::func(val);
            B::getB();
            }
            for(int k = 0 ; k<ccount;k++)
            {
            C::func(val);
            C::getC();
         }
         }
		 //For Checking Purpose
		 void check(int new_val); //Do not delete this line.
};



void D::check(int new_val)
{
    update_val(new_val);
    cout << "Value = " << val << endl << "A's func called " << getA() << " times " << endl << "B's func called " << getB() << " times" << endl << "C's func called " << getC() << " times" << endl;
}


int main()
{
    D d;
    int new_val;
    cin >> new_val;
    d.check(new_val);
}