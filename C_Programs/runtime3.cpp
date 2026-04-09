// Virtual keyword

#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        virtual void fun()        // 1000
        {
            cout<<"\nInside Base fun";
        }  

        void gun()               //2000
        {
            cout<<"\nInside Base gun";
        }   

        virtual void sun()       //3000
        {
            cout<<"\nInside Base sun";
        }

        virtual void run()       //4000
        {
            cout<<"\nInside Base run";
        }
};

class Derived : public Base
{
    public:
        int x,y;

        virtual void fun()       // 5000
        {
            cout<<"\nInside Derived fun";
        }

        void gun()               // 6000
        {
            cout<<"\nInside Derived gun";
        }
        virtual void mun()                //7000
        {
            cout<<"\nInside Derived mun";
        }
        void run()                //8000
        {
            cout<<"\nInside Derived run";
        }
};

int main()
{
    cout<<"\nsize of Base calss:"<<sizeof(Base);         // size 12
    cout<<"\nsize of Derived calss:"<<sizeof(Derived);   // size 20

    Derived dobj;           // size -16

    Base *bptr = NULL;     // Fetching capacity - 8

    bptr = &dobj;          // upcasting


    bptr->fun();          //Derived fun
    bptr->gun();          // Base gun
    bptr->sun();          // base sun
    bptr->run();          // Derived run
    //bptr->mun();          // Error - not function in base class

    return 0;
}
