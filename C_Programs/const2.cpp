#include<iostream>
using namespace std;

class Demo
{
    public:
        int no1,no2;
        const int no3;
        const int no4;

        Demo() : no3(30),no4(40)      // default constructor
        {
            no1 =10;
            no2 = 20;
        }

        Demo(int a,int b,int c,int d) : no3(c),no4(d)    // parameterized constructor
        {
            no1 =a;
            no2 = b;
        }

};

int main()
{
    Demo bobj1;
    Demo bobj2(11,22,33,44);

    cout<<"\nVlaue of no1 is:"<<bobj1.no1;
    cout<<"\nValue of no2 is :"<<bobj1.no2;
    cout<<"\nValue of no3 is :"<<bobj1.no3;
    cout<<"\nValue of no4 is :"<<bobj1.no4;

     cout<<"\n\nVlaue of no1 is:"<<bobj2.no1;
    cout<<"\nValue of no2 is :"<<bobj2.no2;
    cout<<"\nValue of no3 is :"<<bobj2.no3;
    cout<<"\nValue of no4 is :"<<bobj2.no4;

    bobj1.no1++;
    bobj1.no2++;
    // bobj1.no3++;  not allowed
    // bobj1.no4++;  not allowed because is a constant

    return 0;
}