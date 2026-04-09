#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;
        
        void fun()
        {
            cout<<"\nInside Base fun";
        }

        virtual void gun()
        {
            cout<<"\nInside Base gun";
        }

        virtual void sun()
        {
            cout<<"\nInside Base sun";
        }


};

class Derived : public Base
{
    public:
        int x,y;

        virtual void fun()
        {
            cout<<"\nInside Derived fun";
        }

        void gun()
        {
            cout<<"\nInside Derived gun";
        }

        virtual void sun()
        {
            cout<<"\nInside Derived sun";
        }

        void mun()
        {
            cout<<"\nInside Derived mun";
        }

};

int main()
{
    cout<<"\nSize of Base Class:"<<sizeof(Base);
    cout<<"\nSize of Derived Class :"<<sizeof(Derived);

    Derived dobj;
    Base *bptr = NULL;

    bptr = &dobj;

    bptr->fun();
    bptr->gun();
    bptr->sun();

    return 0;

}