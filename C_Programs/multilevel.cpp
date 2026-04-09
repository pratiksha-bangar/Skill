#include<iostream>
using namespace std;


class Base
{
    public:
        int a,b;

        Base()
        {
            cout<<"\nInside Base constructor";
            a = 10;
            b=20;
        }
        ~Base()
        {
            cout<<"\nInside Base Destructor";
        }

        void fun()
        {
            cout<<"\nInside Base Function";
        }

};

class Derived:public Base
{
    public:
        int x,y;

        Derived()
        {
            cout<<"\nInside Derived constructor";
            x=30;
            y=40;
        }
        ~Derived()
        {
            cout<<"\nInside Derived Destructor";
        }
        
        void gun()
        {
            cout<<"\nInside Derived Function";
        }
};

class DerivedX : public Derived
{
    public:
        int i,j;

        DerivedX()
        {
            cout<<"\nInside DerivedX Constructor";
            i =50;
            j=60;
        }

        ~DerivedX()
        {
            cout<<"\nInside DerivedX Destructor";
        }

        void sun()
        {
            cout<<"\nInside DerivedX sun";
        }

};

int main()
{

    DerivedX dobj;   
    // Constructor : Base -> Derived -> DerivedX

    //cout<<sizeof(bobj)<<"\n";
    //cout<<sizeof(dobj)<<"\n";

    cout<<"\nInside main function"<<"\n";

    cout<<"\nSize of Base class"<<sizeof(Base);
    cout<<"\nSize of Derived class"<<sizeof(Derived);
    cout<<"\nSize of DerivedX class"<<sizeof(DerivedX)<<"\n";

    cout<<dobj.a<<"\n"; //10
    cout<<dobj.b<<"\n";  //20
    cout<<dobj.x<<"\n";  //30
    cout<<dobj.y<<"\n";  //40
    cout<<dobj.i<<"\n";  //50
    cout<<dobj.j<<"\n";  //60

    dobj.fun();   // inside Base Fun
    dobj.gun();   // Inside Derived gun
    dobj.sun();   // Inside DerivedX sun

    // Destructor = DerivedX -> Derived -> Base

    return 0;
}