#include<iostream>
using namespace std;

class Base
{
    public:
        int a,b;

        //1000
        int Addition(int no1,int no2)          // concrete method - function with body
        {
            return no1+ no2;
        }

        virtual int substraction(int no1,int no2) =0;  // abstract method - function without body
};

class Derived : public Base
{
    public:
        int x,y;

        //2000
        int Multiplication(int no1,int no2)
        {
            return no1 * no2;
        }

        //3000
        int substraction(int no1,int no2)
        {
            return no1 - no2;
        }
};

int main()
{
    // base bobj;     Not allowed
    Derived dobj;

    cout<<"\nAddition is:"<<dobj.Addition(10,20);
    cout<<"\nMultiplication is :"<<dobj.Multiplication(5,2);
    cout<<"\nSubstraction is :"<<dobj.substraction(20,10);

    cout<<"\nSize of base class:" <<sizeof(Base);
    cout<<"\nSize of derived class is:"<<sizeof(Derived);  

    return 0;
}