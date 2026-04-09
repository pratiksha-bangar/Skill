// Redefination function - exactly same functions

#include<iostream>
using namespace std;

class Base
{
    public:
        void fun()        // Defination
        {
            cout<<"\nInside Base fun";
        }     
};

class Derived : public Base
{
    public:
        void fun()       // Re-Defination
        {
            cout<<"\nInside Derived fun";
        }
};

int main()
{
    cout<<"\nSize of Base class:"<<sizeof(Base);    // 1 byte
    
    Base bobj;
    bobj.fun();

    Derived dobj;
    obj.fun();

    return 0;

}
