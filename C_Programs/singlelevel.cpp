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


int main()
{

    Derived dobj;

    //cout<<sizeof(bobj)<<"\n";
    //cout<<sizeof(dobj)<<"\n";

    cout<<"\nInside main function"<<"\n";

    cout<<dobj.a<<"\n";
    cout<<dobj.b<<"\n";
    cout<<dobj.x<<"\n";
    cout<<dobj.y<<"\n";

    dobj.fun();
    dobj.gun();


    return 0;
}