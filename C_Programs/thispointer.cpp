#include<iostream>
using namespace std;

class Demo
{
    public:
        int no1,no2;

        Demo(int a , int b)
        {
            no1= a;
            no2=b;
        }

        //void display(Demo *this ,int x)
        void display(int x)
        {
            cout<<"\nValue of no1:"<<this->no1;
            cout<<"\nValue of No2 :"<<this->no2;
            cout<<"\nValue of X :"<<x;
        }

};


int main()
{
    Demo obj(10,20);

    obj.display(51);      // display(&obj,51);    display(100,51);

    return 0;
}