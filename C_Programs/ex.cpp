#include<iostream>
using namespace std;

class Base1
{
    public:
        int a;

        Base1()
        {
            cout<<"\nInside Base1 Constructor";
            a=10;
        }
        void fun()
        {
            cout<<"\nInside Base Fun";
        
        }
};

class Derived : public Base1
{
    public:
        int b;

        Derived()
        {
            cout<<"\nInside Derived Constructor";
            b=20;
        }
        void gun(int no1,no2)
        {
            cout<<"\nInside Derived gun";
            return no1+no2;
        }
};

int main()
{
    Derived dobj;

    cout<<"\nSize of Base1 :"<<sizeof(Base1);
    cout<<"\nSize of Derived :"<<sizeof(Derived);

    cout<<"\nValue of a :"<<dobj.a;
    cout<<"\nValue of b :"<<dobj.b;

    cout<<"\nAddition of Two Numbers :"<<dobj.gun(x,y);

    return 0;
}