// cating 

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
};

class Derived : public Base
{
    public:
        int x,y;

        void fun()       // Re-Defination
        {
            cout<<"\nInside Derived fun";
        }
};

int main()
{
    Base bobj;    // size - 8
    Derived dobj; // size -16

    Base *bptr = NULL;     // Fetching capacity - 8
    Derived *dptr = NULL;  // Fetching capacity - 16

    bptr = &bobj;   // Nocasting
    dptr = &dobj;  // Nocasting
    bptr = &dobj;  // upcasting
    dptr = &bobj;    // downcasting
   
    

    return 0;

}
