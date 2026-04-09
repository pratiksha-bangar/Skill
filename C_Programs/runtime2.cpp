
#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        void fun()        // Defination
        {
            cout<<"\nInside Base fun";
        }  

        void gun()
        {
            cout<<"\nInside Base gun";
        }   

        void sun()
        {
            cout<<"\nInside Base sun";
        }

        void run()
        {
            cout<<"\nInside Base run";
        }
};

class Derived : public Base
{
    public:
        int x,y;

        void fun()       // Re-Defination
        {
            cout<<"\nInside Derived fun";
        }

        void gun()
        {
            cout<<"\nInside Derived gun";
        }

        void sun()
        {
            cout<<"\nInside Derved sun";
        }

        void mun()
        {
            cout<<"\nInside Derived mun";
        }
};

int main()
{
    Derived dobj;           // size -16

    Base *bptr = NULL;     // Fetching capacity - 8

    bptr = &dobj;          // upcasting

  // Base pointer can be check then run
    bptr->fun();          //Base fun
    bptr->gun();          // Base gun
    bptr->sun();          // base sun
    bptr->run();          // Base run
    //bptr->mun();        // Error

    return 0;
}
