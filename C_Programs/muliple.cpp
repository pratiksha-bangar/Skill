#include<iostream>
using namespace std;

class Base1
{
    public:
        int i,j;

        Base1()
        {
            cout<<"\n Inside Base1 Constructor";
            i=10;
            j=20;
        }
        ~Base1()
        {
            cout<<"\nInside Base1 Destructor";
        }
        void fun()
        {
            cout<<"\nInside Base1 fun";
        }
};

class Base2
{
    public:
        int x,y;

        Base2()
        {
            cout<<"\n Inside Base2 Constructor";
            x=30;
            y=40;
        }
        ~Base2()
        {
            cout<<"\nInside Base2 Destructor";
        }
        void gun()
        {
            cout<<"\nInside Base2 gun";
        }
};

class Derived : public Base2, public Base1
{
    public:
        int a,b;

        Derived()
        {
            cout<<"\nInside Derived Constructor";
            a=50;
            b=60;
        }
        ~Derived()
        {
            cout<<"\nInside Derived Destructor";
        }
        void sun()
        {
            cout<<"\nInside Derived sun";
        }
};


int main()
{
    Derived dobj;

    cout<<"\nSize of Base1 :"<<sizeof(Base1);
    cout<<"\nSize of Base2 :"<<sizeof(Base2);
    cout<<"\nSize of Derived :"<<sizeof(Derived);

    cout<<"i"<<"\n";
    cout<<"j"<<"\n";
    cout<<"x"<<"\n";
    cout<<"y"<<"\n";
    cout<<"a"<<"\n";
    cout<<"b"<<"\n";

    return 0;
}