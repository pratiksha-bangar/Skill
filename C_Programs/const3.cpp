// constant behaviours

#include<iostream>
using namespace std;

class Demo 
{
    public:
        int no1,no2;

        Demo(int a,int b)
        {
            no1 = a;
            no2 =b;
        }

        void fun()
        {
            no1++;
            no2++;
        }

        void gun() const    //constant function
        {
            //no1++;   not allowed
            //no2++;
        }
};

int main()
{
    Demo obj1(10,20);

    const Demo obj2(11,22);

    obj1.fun();
    obj1.gun();

    obj2.fun();    // not allowed
    obj2.gun();   
    
    return 0;
}